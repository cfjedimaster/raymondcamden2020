
<div class="comment" id="c_2188592128">
	<div>
		<img src="https://disqus.com/api/users/avatars/apandichi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2188592128">1</a> by Alin Pandichi
		posted on 8/12/2015 at 1:45 PM
		</div>
		<div class="comment_text"><p>"If you are using Ionic, then I’d strongly suggest using ngCordova."<br>ngCordova and its "Promise-fied" File Transfer plugin can be used even if you're not using Ionic. All it takes is AngularJS as the "engine" of your mobile app. I used it recently with PhoneGap / plain Cordova.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2188907259">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2188907259">2</a> (In reply to <a href="#c_2188592128">#1</a>) by Raymond Camden
		posted on 8/12/2015 at 4:34 PM
		</div>
		<div class="comment_text"><p>Yep, I was thinking that but typed too quickly. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2629542802">
	<div>
		<img src="https://disqus.com/api/users/avatars/ahmedaminegargoura.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2629542802">3</a> by Ahmed Amine Gargoura
		posted on 4/18/2016 at 10:48 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, Thank you for this post. It's really useful. Please I have a question: how can I integrate the progressEvent.<br>Actually I a kinda implement it but it only working when the upload start with the first image but the rest of images are not uploading. I should attached with every promise but i didn't found a solution. Please any tips?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2629581260">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2629581260">4</a> (In reply to <a href="#c_2629542802">#3</a>) by Raymond Camden
		posted on 4/18/2016 at 11:31 AM
		</div>
		<div class="comment_text"><p>There is no real way to do a 'meta' progressEvent for this. In theory, you could check the file sizes of the pics, and then in the progressEvent, figure out how much of one picture you've done, which in theory lets you know the percent total over all. Doable - just feels like a lot of work. I'd maybe just report as each image completes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2629857453">
	<div>
		<img src="https://disqus.com/api/users/avatars/ahmedaminegargoura.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2629857453">5</a> (In reply to <a href="#c_2629581260">#4</a>) by Ahmed Amine Gargoura
		posted on 4/18/2016 at 3:07 PM
		</div>
		<div class="comment_text"><p>Thank you for the reply. Actually it works now for every Image. What I did, is that before uploading a pic I set a name for every image. Also, I make some editing because of the specification of my task. After That I used a switch case to make the progression for every image.</p><p>It's working as I want. For the record I am using angularJS</p><p>here my solution:</p><p>$scope.uploadPics = function (sell_hash) {<br>            console.log("Ok, going to upload " + $scope.images.length + " images.");<br>            var defs = [];<br>            var sell_hash = sell_hash;<br>            console.log(sell_hash);<br>            $scope.upload_percentage_main = 0;<br>            $scope.upload_percentage_main_show = false;</p><p>            $scope.upload_percentage_detail_1 = 0;<br>            $scope.upload_percentage_detail_1_show = false;</p><p>            $scope.upload_percentage_detail_2 = 0;<br>            $scope.upload_percentage_detail_2_show = false;</p><p>            $scope.upload_percentage_detail_3 = 0;<br>            $scope.upload_percentage_detail_3_show = false;</p><p>            $scope.upload_percentage_detail_4 = 0;<br>            $scope.upload_percentage_detail_4_show = false;</p><p>            $scope.images.forEach(function (fileURI, count) {<br>                console.log('processing ' + fileURI);<br>                console.log(count);<br>                var def = $.Deferred();</p><p>                function win(r) {<br>                    console.log("thing done");<br>                    if ($.trim(r.response) === "0") {<br>                        console.log("this one failed");<br>                        def.resolve(0);<br>                    } else {<br>                        console.log("this one passed");<br>                        console.log("Code = " + r.responseCode);<br>                        console.log("Response = " + r.response);<br>                        console.log("Sent = " + r.bytesSent);<br>                        def.resolve(1);<br>                    }</p><p>                }</p><p>                function fail(error) {<br>                    console.log("An error has occurred: Code = " + error.code);<br>                    console.log("upload error source " + error.source);<br>                    console.log("upload error target " + <a href="http://disq.us/url?url=http%3A%2F%2Ferror.target%3Ayhu4ttdns4kVaO6c5vyrH3WW974&amp;cuid=3321886" rel="nofollow noopener" title="error.target">error.target</a>);<br>                    def.resolve(0);<br>                }</p><p>                var uri = encodeURI("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.xxxxx.info%2Fhhhh%2Fyyy%2Fupload.php%3A0k3rsp0D7wd-Q8jOEcz-jnYrhTk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.xxxxx.info/hhhh/yyy/upload.php">http://www.xxxxx.info/hhhh/...</a>");<br>                // var filename = fileURI.substr(i.lastIndexOf('/') + 1);<br>                if (count === 0) {<br>                    var filename = 'main.jpg';<br>                    var directory_path = '/html/beta4/www/data/sell/' + sell_hash + '/main';<br>                } else {<br>                    //var filename = fileURI.substr(fileURI.lastIndexOf('/') + 1);<br>                    var filename = 'detail_' + count + '.jpg';<br>                    var directory_path = '/html/beta4/www/data/sell/' + sell_hash;<br>                }<br>                var imageName = filename;</p><p>                console.log(directory_path);<br>                var options = new FileUploadOptions();<br>                options.fileKey = "file";<br>                options.fileName = filename;<br>                options.mimeType = "image/jpeg";<br>                options.params = {'directory': directory_path, 'fileName': filename};</p><p>                var ft = new FileTransfer();</p><p>                ft.upload(fileURI, uri, win, fail, options);<br>                defs.push(def.promise());<br>                ft.onprogress = function (progressEvent) {<br>                    if (progressEvent.lengthComputable) {<br>                        console.log(progressEvent.loaded);<br>                        console.log(<a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a>);</p><p>                        switch (imageName) {<br>                            case 'main.jpg':<br>                                $scope.upload_percentage_main_show = true;<br>                                $scope.upload_percentage_main = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>                                $scope.$apply();<br>                                console.log($scope.upload_percentage_main);<br>                                console.log("here file name main");<br>                                break;</p><p>                            case 'detail_1.jpg':<br>                                $scope.upload_percentage_detail_1_show = true;<br>                                $scope.upload_percentage_detail_1 = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>                                $scope.$apply();<br>                                console.log($scope.upload_percentage_detail_1);<br>                                console.log("here file name detail_1");<br>                                break;</p><p>                            case 'detail_2.jpg':<br>                                $scope.upload_percentage_detail_2_show = true;<br>                                $scope.upload_percentage_detail_2 = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>                                $scope.$apply();<br>                                console.log($scope.upload_percentage_detail_2);<br>                                console.log("here file name detail_2");<br>                                break;</p><p>                            case 'detail_3.jpg':<br>                                $scope.upload_percentage_detail_3_show = true;<br>                                $scope.upload_percentage_detail_3 = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>                                $scope.$apply();<br>                                console.log($scope.upload_percentage_detail_3);<br>                                console.log("here file name detail_3");<br>                                break;</p><p>                            case 'detail_4.jpg':<br>                                $scope.upload_percentage_detail_4_show = true;<br>                                $scope.upload_percentage_detail_4 = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>                                $scope.$apply();<br>                                console.log($scope.upload_percentage_detail_4);<br>                                console.log("here file name detail_4");<br>                                break;</p><p>                            default:<br>                                alert('Perdu !');<br>                        }</p><p>                    }<br>                };</p><p>            });</p><p>            $.when.apply($, defs).then(function () {<br>                console.log("all things done");<br>                // Cleans up the image files that were taken by the camera, that were stored in a temporary storage location.<br>                navigator.camera.cleanup();<br>                $scope.loading = false;<br>                $scope.$apply();<br>                // We should run the expression "$location.path("/sells");" as function in the $apply() method, to take effect<br>                $rootScope.$apply(function () {<br>                    $location.path("/sells");<br>                });</p><p>                console.dir(arguments);</p><p>            });</p><p>        };</p></div>
	</div>
</div>
		
<div class="comment" id="c_2633818804">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_r1Sy3WKNyi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2633818804">6</a> by Bahrul Ulum
		posted on 4/20/2016 at 5:06 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, I want to ask, I followed your post, but when I choose more than 1 image, it only upload the latest one, even when I check the processed file on console log, it processed each image. <br>Can you help me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2634283748">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2634283748">7</a> (In reply to <a href="#c_2633818804">#6</a>) by Raymond Camden
		posted on 4/20/2016 at 9:09 PM
		</div>
		<div class="comment_text"><p>I'd check on the server to ensure it isn't an issue there. That's all I can think of right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659453873">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659453873">8</a> by Akash Pal
		posted on 5/5/2016 at 7:16 AM
		</div>
		<div class="comment_text"><p>I have a need to upload multiple images in one request using Cordova. <br>However the solution on the page sends the images in separate requests.</p><p>Is there a way to achieve multiple files upload in single request?<br>How can the file transfer plugin be modified to upload multiple files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659867156">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659867156">9</a> (In reply to <a href="#c_2659453873">#8</a>) by Raymond Camden
		posted on 5/5/2016 at 1:42 PM
		</div>
		<div class="comment_text"><p>I can't speak to modifying the File Transfer plugin. You would need to look at the source code. As for how I'd do it in JavaScript, the XHR2 specification allows for file uploads in a POST operation. You could use that to send multiple items in one POST.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660245015">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660245015">10</a> (In reply to <a href="#c_2659867156">#9</a>) by Akash Pal
		posted on 5/5/2016 at 5:16 PM
		</div>
		<div class="comment_text"><p>Could you provide an implementation of uploading multiple images using XHR2 and mutli image picker plugin?</p><p>without using &lt;input type="file" multiple=""&gt;</p><p>I have tried modifying the File Transfer Plugin but it hasnt worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660313406">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660313406">11</a> (In reply to <a href="#c_2660245015">#10</a>) by Raymond Camden
		posted on 5/5/2016 at 5:54 PM
		</div>
		<div class="comment_text"><p>Yes - I will have a demo on this blog in about two hours. I won't post back here, so just check the blog in - well - 2 to 3 hours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660340330">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660340330">12</a> (In reply to <a href="#c_2660313406">#11</a>) by Akash Pal
		posted on 5/5/2016 at 6:08 PM
		</div>
		<div class="comment_text"><p>Kindly implement using cordova. <br>Do provide the link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660347444">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660347444">13</a> (In reply to <a href="#c_2660340330">#12</a>) by Raymond Camden
		posted on 5/5/2016 at 6:12 PM
		</div>
		<div class="comment_text"><p>It won't be in Cordova, but will be in code you can easily use in Cordova. I don't have a link as it isn't published yet. Just come back to the blog and look for the latest entry. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660353418">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660353418">14</a> (In reply to <a href="#c_2660347444">#13</a>) by Akash Pal
		posted on 5/5/2016 at 6:15 PM
		</div>
		<div class="comment_text"><p>Okay I can implement it in cordova if the implementation is done only with image URI. As this plugin <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fwymsee%2Fcordova-imagePicker%3Abd9c6pnK9sVfyC35DIpXhJRIljg&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/wymsee/cordova-imagePicker">https://github.com/wymsee/c...</a><br>returns image URI of the selected images.</p><p>My objective is to select multiple images from gallery and upload in one request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660356151">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660356151">15</a> (In reply to <a href="#c_2660353418">#14</a>) by Raymond Camden
		posted on 5/5/2016 at 6:17 PM
		</div>
		<div class="comment_text"><p>Well I'd suggest reading my blog post. It is a generic solution that you should be able to apply. For a *specific* solution to fit your needs, if you want me to write that it would have to be a paid engagement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660366485">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660366485">16</a> (In reply to <a href="#c_2660356151">#15</a>) by Akash Pal
		posted on 5/5/2016 at 6:22 PM
		</div>
		<div class="comment_text"><p>I have gone through your blog post however it uploads images in separate requests. I just require some guidance to achieve my objective. I would appreciate any help from your side. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660370364">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660370364">17</a> (In reply to <a href="#c_2660366485">#16</a>) by Raymond Camden
		posted on 5/5/2016 at 6:25 PM
		</div>
		<div class="comment_text"><p>I don't think you understand me. The blog post isn't done yet. I'm writing a *new* blog post. Like right now. Check the blog (go to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%3AV4TyDILenHh_0tZlJVIqv_583Yk&amp;cuid=3321886" rel="nofollow noopener" title="www.raymondcamden.com">www.raymondcamden.com</a>) in about an hour and see the *new* post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660375732">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660375732">18</a> (In reply to <a href="#c_2660370364">#17</a>) by Akash Pal
		posted on 5/5/2016 at 6:28 PM
		</div>
		<div class="comment_text"><p>I do get you. I do appreciate for taking out your time for this. Will definitely check out your blog within an hour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694879506">
	<div>
		<img src="https://disqus.com/api/users/avatars/laersheng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694879506">19</a> (In reply to <a href="#c_2659453873">#8</a>) by laersheng
		posted on 5/25/2016 at 4:46 PM
		</div>
		<div class="comment_text"><p>I have this need too,have you resolved it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694894933">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694894933">20</a> (In reply to <a href="#c_2694879506">#19</a>) by Raymond Camden
		posted on 5/25/2016 at 4:55 PM
		</div>
		<div class="comment_text"><p>I did - see my later posts. :) (Right hand side of blog has latest posts.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2742896528">
	<div>
		<img src="https://disqus.com/api/users/avatars/rod_dickinson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2742896528">21</a> by rod Dickinson
		posted on 6/21/2016 at 5:32 PM
		</div>
		<div class="comment_text"><p>Dear Raymond, thank you for this and your other cordova tutorials - and the github repository of them all. I have a quick question about implementing this file transfer example. I've used a php script (tested in a browser) and it keeps returning Undefined index: fileToUpload. It seems to not recognise the incoming file. <br>I'm pretty sure this is an issue with the sever / php not your cordova example and I wondered if you had come across anything like it? (I realise you are using cold fusion).<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2742905798">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2742905798">22</a> (In reply to <a href="#c_2742896528">#21</a>) by Raymond Camden
		posted on 6/21/2016 at 5:38 PM
		</div>
		<div class="comment_text"><p>Does PHP have a way to dump the entire scope of form fields? If so, I'd use that to see what is being sent to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2743474421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2743474421">23</a> (In reply to <a href="#c_2742905798">#22</a>) by rod Dickinson
		posted on 6/21/2016 at 11:16 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks it does (var_dump($_POST)) and that helped a lot.</p><p>I now have this working in iOS8 and Android lollipop (on actual devices and a remote server with a php script).</p><p>I added some params to your uploadPics() which get passed to the php script.</p><p>uploadPics() snippet:</p><p>var options = new FileUploadOptions();<br>options.fileKey="file";<br>options.fileName=i.substr(i.lastIndexOf('/')+1);<br>options.mimeType="image/jpeg";</p><p>//added<br>var params = new Object();<br><a href="http://disq.us/url?url=http%3A%2F%2Fparams.directory%3AS34LFksaY0DM57wyHwo2FJJGhto&amp;cuid=3321886" rel="nofollow noopener" title="params.directory">params.directory</a> = "uploads"; //must correspond with $_POST['directory']<br>params.fileName = i.substr(i.lastIndexOf('/')+1); //must correspond with $_POST['fileName']</p><p>options.params = params;<br>//end added</p><p> var ft = new FileTransfer();</p><p>Then the php script (very basic and for testing only as contains no security checks):</p><p>This post<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.gajotres.net%2Fusing-cordova-file-transfer-plugin-with-ionic-framework%2F2%2F%3Az4vpa2OCvZazIwJrwmWbuzVeAwI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gajotres.net/using-cordova-file-transfer-plugin-with-ionic-framework/2/">http://www.gajotres.net/usi...</a><br>contained all of the above.</p><p>Hope this is useful to someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2743477815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2743477815">24</a> (In reply to <a href="#c_2743474421">#23</a>) by rod Dickinson
		posted on 6/21/2016 at 11:19 PM
		</div>
		<div class="comment_text"><p>The php script in its entirety</p><p>$location = $_POST['directory'];<br>$uploadfile = $_POST['fileName'];<br>$uploadfilename = $_FILES['file']['tmp_name'];</p><p>if(move_uploaded_file($uploadfilename, $location.'/'.$uploadfile)){<br>        echo 'File successfully uploaded!';<br>} else {<br>        echo 'Upload error!';<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2764079220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2764079220">25</a> by Darwin Naranjo
		posted on 7/4/2016 at 1:57 AM
		</div>
		<div class="comment_text"><p>Your examples is great! any other example with progress bar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2764640259">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2764640259">26</a> (In reply to <a href="#c_2764079220">#25</a>) by Raymond Camden
		posted on 7/4/2016 at 1:31 PM
		</div>
		<div class="comment_text"><p>Nope, sorry. Technically possible of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2816550171">
	<div>
		<img src="https://disqus.com/api/users/avatars/codesundar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2816550171">27</a> by Sundaravel M
		posted on 8/2/2016 at 8:52 AM
		</div>
		<div class="comment_text"><p>Thanks for tutorial, I found some simple &amp; useful article for uploading images to php server using phonegap file transfer plugin <a href="http://disq.us/url?url=http%3A%2F%2Fphonegappro.com%2Ftutorials%2Fupload-images-to-server-using-phonegap-file-transfer-plugin%2F%3ADfB_ZVIGZfVZdPbhv_EATdScsPI&amp;cuid=3321886" rel="nofollow noopener" title="http://phonegappro.com/tutorials/upload-images-to-server-using-phonegap-file-transfer-plugin/">http://phonegappro.com/tuto...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2886195831">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2886195831">28</a> by Sarah
		posted on 9/10/2016 at 4:26 PM
		</div>
		<div class="comment_text"><p>Hi thank you for this.. is there any way to restrict the size of the file uploaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2886206477">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2886206477">29</a> (In reply to <a href="#c_2886195831">#28</a>) by Raymond Camden
		posted on 9/10/2016 at 4:33 PM
		</div>
		<div class="comment_text"><p>Yes. You would need to use the File plugin to get the size. You could then add restrictions on a per file basis (no image over X) and/or a total.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2886234299">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2886234299">30</a> (In reply to <a href="#c_2886206477">#29</a>) by Sarah
		posted on 9/10/2016 at 4:54 PM
		</div>
		<div class="comment_text"><p>great thanks. and i was also wondering do you know the best way to allow the user to crop an image after they select it? in my app i want a user to select a photo for their profile pic and i want the profile pic to be of dimensions approx 200X200px before it is uploaded. thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2887630026">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2887630026">31</a> (In reply to <a href="#c_2886257933">#0</a>) by Raymond Camden
		posted on 9/11/2016 at 3:53 PM
		</div>
		<div class="comment_text"><p>The Camera plugin allows for simple editing, but I'm not sure what that will allow for *existing* pictures.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2887698991">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2887698991">32</a> (In reply to <a href="#c_2887630026">#31</a>) by Sarah
		posted on 9/11/2016 at 4:39 PM
		</div>
		<div class="comment_text"><p>great thanks for the information :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2953738200">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2953738200">33</a> by Sarah
		posted on 10/16/2016 at 9:19 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. I was wondering can you help (again lol).. I had the file transfer code in your tutorial working successfully in a phonegap build with adobe phonegap. using the following in my config file: &lt;gap:plugin name="org.apache.cordova.file-transfer" spec="0.5.0" source="pgb"/&gt; but now in my phonegap account they are telling me the following "This app uses plugins from the PhoneGap Build repository. These plugins won't be accessible after Nov 15th, 2016" so ive researched this a bit and ive found out that you should change to the npm version of the plugin. so i tried this in my config: &lt;plugin name="cordova-plugin-file-transfer" source="npm" version="1.3.0"/&gt; however its not working.... any ideas? thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2953744069">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2953744069">34</a> (In reply to <a href="#c_2953738200">#33</a>) by Raymond Camden
		posted on 10/16/2016 at 9:24 PM
		</div>
		<div class="comment_text"><p>How is it not working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2953752417">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2953752417">35</a> (In reply to <a href="#c_2953744069">#34</a>) by Sarah
		posted on 10/16/2016 at 9:30 PM
		</div>
		<div class="comment_text"><p>well it doesnt seem to be executing the code anymore as the file transfers are not coming back as passed or failed...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2953756506">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2953756506">36</a> (In reply to <a href="#c_2953752417">#35</a>) by Raymond Camden
		posted on 10/16/2016 at 9:34 PM
		</div>
		<div class="comment_text"><p>Do you see anything when you do a remote debug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3020067617">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oS6xnmUrBj.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3020067617">37</a> by Tony Davidson
		posted on 11/25/2016 at 6:10 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Firstly, thank you for putting up the code, it works really well at uploading multiple images.  However, I am having a few problems getting the following part of the code to fire :</p><p>                    $.when.apply($, defs).then(function() { });</p><p>I can upload many images successfully and get the responses back to my terminal telling me it has completed.  It looks like the Deferred objects aren't being resolved.</p><p>It would be great if you could look over my code and perhaps give me a hint of where I have gone wrong.  I think my understanding of Deferred and Promises is lacking.  I don't understand the purpose of the arguments being passed in the def.resolve(1) or def.resolve(0) calls.</p><p>My function takes objects from a array of objects holding references to .png files which were captured using an html canvas.  The $.when.apply($, defs).then(function() { }); does fire if there are no objects in the array or an error is returned.</p><p>function syncSignatures() {<br>    var defs = [];<br>    var i;<br>    $(".loader").show();<br>    for(i = 0; i &lt; signatureCache.signatures.length; i++){<br>        var def = $.Deferred();<br>        var image;</p><p>        function win(r) {<br>            console.log("thing done : ", r);<br>            if($.trim(r.response) === "0") {<br>                console.log("this one failed");<br>                def.resolve(0);<br>            } else {<br>                console.log("Code = " + r.responseCode);<br>                console.log("Response = " + r.response);<br>                console.log("Sent = " + r.bytesSent);<br>                var file = r.response;<br>                file = file.replace(" uploaded successfully", "");<br>                for(s = 0; s &lt; signatureCache.signatures.length; s++){<br>                    var sig = signatureCache.signatures[s];<br>                    if(sig.fileName == file){<br>                        signatureCache.signatures.splice(s, 1);<br>                        break;<br>                    }<br>                }<br>                def.resolve(1);<br>            }<br>        }<br>        function fail(error) {<br>            console.log("upload error source " + error.source);<br>            console.log("upload error target " + <a href="http://disq.us/url?url=http%3A%2F%2Ferror.target%3Ayhu4ttdns4kVaO6c5vyrH3WW974&amp;cuid=3321886" rel="nofollow noopener" title="error.target">error.target</a>);<br>            console.log("upload http status " + error.http_status);<br>            console.log("upload error body " + error.body);<br>            def.resolve(0);<br>        }</p><p>        image = signatureCache.signatures[i];<br>        var options = new FileUploadOptions();<br>        console.log(image.signature);<br>        options.fileKey = "file";<br>        options.fileName = image.fileName;<br>        options.mimeType = "image/jpeg";<br>        options.chunkedMode = true;</p><p>        var params = {};<br>        params.jobId = image.jobid;<br>        params.deviceUUID = image.deviceUUID;<br>        <a href="http://disq.us/url?url=http%3A%2F%2Fparams.name%3AIS70Zz9xwP_b9LUkW4PCmlRjtSs&amp;cuid=3321886" rel="nofollow noopener" title="params.name">params.name</a> = <a href="http://disq.us/url?url=http%3A%2F%2Fimage.name%3ATgVMMIhZhb3M280aLzqJm_St-Nw&amp;cuid=3321886" rel="nofollow noopener" title="image.name">image.name</a>;<br>        params.timestamp = image.timestamp;</p><p>        options.params = params;</p><p>        var ft = new FileTransfer();<br>        ft.upload(image.signature, encodeURI(baseUrl+'syncImages'), win, fail, options);<br>        defs.push(def.promise());<br>    }<br>    $.when.apply($, defs).then(function() {<br>        console.log("all signatures uploaded");<br>        console.dir(arguments);<br>        $(".loader").hide();<br>    });<br>}</p><p>Once again, thank you for the original code, as with other topics you discuss on your blog it is incredibly helpful and clearly written and so helpful to someone like me embarking on a career as a software developer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3021328766">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3021328766">38</a> (In reply to <a href="#c_3020067617">#37</a>) by Raymond Camden
		posted on 11/26/2016 at 3:41 PM
		</div>
		<div class="comment_text"><p>Well first off - does the *original* code work for you? As for what resolve(1) and resolve(0) were doing: They are basically saying, "This particular Promise is done and either had a good or bad result." I could have used reject() as well to return an error, but decided on using a status result (1 or 0) instead.</p><p>Also - please post your code someplace else, like Pastebin, as it is too hard to read here.</p><p>Also - be sure to test with remote debugging and report on what you see in the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3144941624">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3144941624">39</a> by Sarah
		posted on 2/8/2017 at 10:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. I was wondering can you help again? :) I've been using the file transfer plugin in my project and works grand. thanks :) As I am packaging up the app with phonegap build, I have been sending the images to a php page on a remote server and all working grand. I used the following header in the php page header("Access-Control-Allow-Origin: *"); Now I have decided to use ssl on my server so now I am trying to send the images to a uri with https:// e.g var uri = encodeURI(<a href="https://disq.us/url?url=https%3A%2F%2Fwwwexample.com%2Fupload_image.php%3AWqT4SkBAI5ZWapMrQGv4DwvkZG0&amp;cuid=3321886" rel="nofollow noopener" title="https://wwwexample.com/upload_image.php">https://wwwexample.com/uplo...</a>"); However the images are failing and I am getting the following error: "http_status":406, "body":"&lt;head&gt;Not Acceptable!&lt;/head&gt;&lt;body&gt;An appropriate representation of the requested resource could not be found on this server. This error was generated by Mod_Security&lt;/body&gt;".. I have looked up error 406 and it seems to be to do with the headers. I was just wondering would you know how to fix it? thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3146564897">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3146564897">40</a> (In reply to <a href="#c_3144941624">#39</a>) by Raymond Camden
		posted on 2/9/2017 at 8:14 PM
		</div>
		<div class="comment_text"><p>Hmm - maybe try trustAllHosts option defined here: <a href="https://disq.us/url?url=https%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2Flatest%2Freference%2Fcordova-plugin-file-transfer%2Findex.html%3AbcVsCSuLdBsfVFk6O6s8aiNPMT4&amp;cuid=3321886" rel="nofollow noopener" title="https://cordova.apache.org/docs/en/latest/reference/cordova-plugin-file-transfer/index.html">https://cordova.apache.org/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3171493047">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3171493047">41</a> (In reply to <a href="#c_3146564897">#40</a>) by Sarah
		posted on 2/23/2017 at 6:35 PM
		</div>
		<div class="comment_text"><p>Ok thank you :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3208480505">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GLKQm158Jh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3208480505">42</a> by Mani Raj
		posted on 3/17/2017 at 7:00 AM
		</div>
		<div class="comment_text"><p>In my case duplicate images are uploaded even i choose different images in android.but its working in simulator.Any issue related to this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3208938618">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3208938618">43</a> (In reply to <a href="#c_3208480505">#42</a>) by Raymond Camden
		posted on 3/17/2017 at 2:50 PM
		</div>
		<div class="comment_text"><p>I'd need to know more, debug, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3212825327">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GLKQm158Jh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3212825327">44</a> (In reply to <a href="#c_3208938618">#43</a>) by Mani Raj
		posted on 3/20/2017 at 6:10 AM
		</div>
		<div class="comment_text"><p>I removed correctOrientation: true issue was fixed</p></div>
	</div>
</div>
		
<div class="comment" id="c_3225341457">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_l4KgHfTiGg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3225341457">45</a> by Derp
		posted on 3/27/2017 at 7:58 AM
		</div>
		<div class="comment_text"><p>How do i go on about to upload video type files too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3225662557">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3225662557">46</a> (In reply to <a href="#c_3225341457">#45</a>) by Raymond Camden
		posted on 3/27/2017 at 2:07 PM
		</div>
		<div class="comment_text"><p>What did you try? This post demonstrates how to do it with images, but the source doesn't really matter. You should be able to apply this to any file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3225799239">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_l4KgHfTiGg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3225799239">47</a> (In reply to <a href="#c_3225662557">#46</a>) by Derp
		posted on 3/27/2017 at 3:39 PM
		</div>
		<div class="comment_text"><p>I tried it with the original source code and I've added the cordova plugins (file-transfer &amp; camera) and using my own php file but sadly I'm not able to add any other source other than image (jpeg).</p><p>I'm new to ionic so my knowledge isn't that vast. I switched out the mimetype to  video/mp4 and it doesn't work on either android or ios via ionic view. Could you point me in the right direction as to what I'm doing wrong.</p><p>Thanks a bunch and I know you get this kind of questions alot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3225964706">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3225964706">48</a> (In reply to <a href="#c_3225799239">#47</a>) by Raymond Camden
		posted on 3/27/2017 at 5:23 PM
		</div>
		<div class="comment_text"><p>Not sure what I can tell you here - the changes you made were correct, but you also have to change *where* the files are sourced from. You need to figure out what directory holds your video files so you can properly address them with the FileTransfer plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286416266">
	<div>
		<img src="https://disqus.com/api/users/avatars/kim_carlo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286416266">49</a> by Alex
		posted on 5/3/2017 at 10:37 AM
		</div>
		<div class="comment_text"><p>I'm trying to upload 100 plus photos.. some photos were not uploaded about half of the total number of photos are missing.. is there any other method to do multiple uploads?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286564632">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286564632">50</a> (In reply to <a href="#c_3286416266">#49</a>) by Raymond Camden
		posted on 5/3/2017 at 12:59 PM
		</div>
		<div class="comment_text"><p>You could zip the files first so you just have one file to upload. You could also try to re-upload the ones that fail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288002542">
	<div>
		<img src="https://disqus.com/api/users/avatars/kim_carlo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288002542">51</a> (In reply to <a href="#c_3286564632">#50</a>) by Alex
		posted on 5/4/2017 at 6:43 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a>.. how do I do re-upload the ones that fail? can you give me some idea? thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288213390">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288213390">52</a> (In reply to <a href="#c_3288002542">#51</a>) by Raymond Camden
		posted on 5/4/2017 at 11:36 AM
		</div>
		<div class="comment_text"><p>You would use an error handler, note the files that failed, and try again. Perhaps you can keep calling an 'upload' routine until the list of files is 0, or use a sanity check of some sort that stops this after 5 tries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538458927">
	<div>
		<img src="https://disqus.com/api/users/avatars/kim_carlo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538458927">53</a> (In reply to <a href="#c_3288213390">#52</a>) by Alex
		posted on 9/27/2017 at 1:31 PM
		</div>
		<div class="comment_text"><p>Thanks! how about zipping the taken photos? do you have any tutorials for that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538674476">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538674476">54</a> (In reply to <a href="#c_3538458927">#53</a>) by Raymond Camden
		posted on 9/27/2017 at 3:46 PM
		</div>
		<div class="comment_text"><p>There are a few libraries for client-side zipping. I haven't used them in a while, but Google for JavaScript zip library and you will find some options. In general, I don't trust binary heavy stuff in JS, but it's an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3540288459">
	<div>
		<img src="https://disqus.com/api/users/avatars/kim_carlo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3540288459">55</a> (In reply to <a href="#c_3538674476">#54</a>) by Alex
		posted on 9/28/2017 at 10:02 AM
		</div>
		<div class="comment_text"><p>Thank you for your reply, but, this is doable, right? uploading hundreds of photos to server using web APIs?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3540469694">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3540469694">56</a> (In reply to <a href="#c_3540288459">#55</a>) by Raymond Camden
		posted on 9/28/2017 at 1:01 PM
		</div>
		<div class="comment_text"><p>... well... maybe. "hundreds" is a lot, and depending on your network connection it may or may not be doable. You *can* look at the connection speed and you can do things like, I have A,B,C to upload, as I process, mark them off the list so that if things go wrong, I can resume later.</p><p>I'd say doable - just expect your complexity to go up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3599630566">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_XNYnyqsFoe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3599630566">57</a> by Saj
		posted on 11/4/2017 at 9:40 AM
		</div>
		<div class="comment_text"><p>Similarly, how can i browse and read as text then upload a JSON/XML file in cordova app? Could you please post a tutorial? It will be very helpful. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3600318698">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3600318698">58</a> (In reply to <a href="#c_3599630566">#57</a>) by Raymond Camden
		posted on 11/4/2017 at 8:34 PM
		</div>
		<div class="comment_text"><p>The filesystem plugin lets you do file system operations. So it can list, read directories and files. To make a 'browser' you would use the plugin and render stuff so the user can navigate.</p><p>As for uploading, that's the filetransfer plugin which is officially (afaik) deprecated now that there is support for it in native browser JavaScript (but you can still use the plugin).</p></div>
	</div>
</div>
		