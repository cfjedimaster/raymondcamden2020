
<div class="comment" id="c_4199214257">
	<div>
		<img src="https://disqus.com/api/users/avatars/plazzah.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4199214257">1</a> by plazzah
		posted on 11/17/2018 at 4:59 AM
		</div>
		<div class="comment_text"><p>Hi Raymond. I had a similar experience working with nativescript-background-http. In fact I had to drop it. In my case I needed to upload simple signature image files to the server . I ended up using nativescript-https. I converted the image file to a string and that took some figuring out because the docs are not clear on this. Here is my code:</p><p>const commonUtils = require("../shared/common");<br>const imageSourceModule = require("tns-core-modules/image-source");<br>const CircularModalViewModel = require("./circular-modal-view-model");<br>const circularModalViewModel = new CircularModalViewModel();<br>const LoadingIndicator = require("nativescript-loading-indicator").LoadingIndicator;<br>const loadingIndicator = new LoadingIndicator();</p><p>let page;<br>let dataform;<br>let mySignature;<br>let myButton;</p><p>function onShownModally(args) {<br>    page = args.object;<br>    dataform = page.page.getViewById("myDataForm");<br>    mySignature = page.page.getViewById("mySignature");<br>    myButton = page.page.getViewById("myButton");<br>    mySignature.visibility = "collapsed";<br>    page.bindingContext = args.context;<br>}</p><p>function onCloseModal(args) {<br>    args.object.closeModal();<br>}</p><p>function onTapNext(args) {<br>    dataform.validateAll()<br>    .then((result) =&gt; {<br>       if (result === true) {<br>        dataform.commitAll();<br>        console.dir(dataform.editedObject);<br>        dataform.visibility = "collapsed";<br>        mySignature.visibility = "visible";</p><p>        if (myButton.text === "Submit") {<br>            const drawingPad = page.getViewById("myDrawingPad"); //get drawing pad id<br>            drawingPad.getDrawing().then((signature) =&gt; {<br>                <a href="http://disq.us/url?url=http%3A%2F%2FloadingIndicator.show%3AZQ0t2dcU3kX2sxHu-xr6U7GXwBk&amp;cuid=3321886" rel="nofollow noopener" title="loadingIndicator.show">loadingIndicator.show</a>();</p><p>                // console.log(signature.getWidth());<br>                const resized = resize(signature, 300); resize the signature<br>                // console.log("first: "+resized.getWidth());<br>                //<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fbradmartin%2Fnativescript-drawingpad%2Fissues%2F15%3Awvo_qw7aa-vowrYRQyHfkGci4ss&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/bradmartin/nativescript-drawingpad/issues/15">https://github.com/bradmart...</a></p><p>                const image = imageSourceModule.fromNativeSource(resized);//1<br>                const base64 = image.toBase64String("png"); //2:</p><p>                //do 1 and 2 to convert image to base64<br>                //once the image is a base64 you can upload to server using <br>                //fetch module, http module or in my case: nativescript-https</p><p>                circularModalViewModel.upload({ object: dataform.editedObject,<br>                                                circularID: page.bindingContext.circularID,<br>                                                signature: base64 })<br>                                                .catch((error) =&gt; {<br>                                                    console.log(error);<br>                                                    loadingIndicator.hide();<br>                                                }).then((response) =&gt; {<br>                                                    loadingIndicator.hide();<br>                                                    commonUtils.showFeedBack({<br>                                                        title: "Success!",<br>                                                        message: "Your information was sent successfully.",<br>                                                        duration: 7000<br>                                                    });<br>                                                    exports.onCloseModal(args);<br>                                                });<br>            });<br>        }<br>        myButton.text = "Submit";</p><p>       }<br>    }).catch((error) =&gt; {<br>        console.log(error);<br>    });<br>}</p><p>function hideSignature() {<br>    dataform.visibility = "visible";<br>    mySignature.visibility = "collapsed";<br>    myButton.text = "Next";<br>}</p><p>function clearSignature(args) {<br>    const drawingPad = page.getViewById("myDrawingPad");<br>    drawingPad.clearDrawing();<br>}</p><p>function resize(sourceImage, targetWidth) {<br>    const sourceWidth = sourceImage.getWidth();<br>    if (sourceWidth &lt; targetWidth) {<br>        return null;<br>    }<br>    const sourceHeight = sourceImage.getHeight();<br>    const adjustedHeight = (targetWidth * sourceHeight) / sourceWidth;<br>    const resizedImage = android.graphics.Bitmap.createScaledBitmap(sourceImage, targetWidth, adjustedHeight, true);</p><p>    return resizedImage;<br>}</p><p>exports.onCloseModal = onCloseModal;<br>exports.onShownModally = onShownModally;<br>exports.onTapNext = onTapNext;<br>exports.hideSignature = hideSignature;<br>exports.clearSignature = clearSignature;</p></div>
	</div>
</div>
		
<div class="comment" id="c_4226864016">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zbDWPsviOx.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4226864016">2</a> by Dask
		posted on 12/5/2018 at 7:32 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, did you test it with Android Studio as well or just with your phone? Because I've been playing around with Studio and the emulators and I've had nothing but issues and weird error messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4228043868">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CJn2Pqwd0V.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4228043868">3</a> by Nick Franklin
		posted on 12/6/2018 at 3:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks for this, extremely useful. Do you have any examples in Nativescript to handle video. I'm not sure why the Nativescipt developers haven't included video support in the camera plugin, it seems an obvious thing to do. I've tried a few alternative plugins but not had much luck as I also need to upload to a server. I'm developing for iOS at the moment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4228142871">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4228142871">4</a> (In reply to <a href="#c_4226864016">#2</a>) by Raymond Camden
		posted on 12/6/2018 at 4:32 PM
		</div>
		<div class="comment_text"><p>I generally just test with my phone, a Pixel 3 XL. I do use the emulator from time to time but not usually. If I remember right, when I was struggling w/ the camera I did try the emulator too, but it didn't help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4228143336">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4228143336">5</a> (In reply to <a href="#c_4228043868">#3</a>) by Raymond Camden
		posted on 12/6/2018 at 4:32 PM
		</div>
		<div class="comment_text"><p>Sorry no, I haven't tried that yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4228148477">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zbDWPsviOx.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4228148477">6</a> (In reply to <a href="#c_4228142871">#4</a>) by Dask
		posted on 12/6/2018 at 4:35 PM
		</div>
		<div class="comment_text"><p>I figured it out already, thanks! One of the things that made it break was putting it in mounted(). Calling it with a separate method via a button just works normally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4282105020">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_joeE45BaBX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4282105020">7</a> by john andrew
		posted on 1/12/2019 at 5:47 PM
		</div>
		<div class="comment_text"><p>Hi raymond, can you share what is the error you encounter before using ngROK? Im using laravel php for my backend and already setup my url to https via ngRok. Rightnow Im receiving error "NAMESPACE of undefined" which I dont no were I got wrong. Hope you have idea on this. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_4282166501">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4282166501">8</a> (In reply to <a href="#c_4282105020">#7</a>) by Raymond Camden
		posted on 1/12/2019 at 6:33 PM
		</div>
		<div class="comment_text"><p>Not quite sure what you mean. I needed ngrok so that my desktop server would be hittable from my phone. It was just a proxy really. As to your second part, I'd need to know more, like where it happened, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4282180102">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_joeE45BaBX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4282180102">9</a> (In reply to <a href="#c_4282166501">#8</a>) by john andrew
		posted on 1/12/2019 at 6:43 PM
		</div>
		<div class="comment_text"><p>Under nativescript-background-http documentation says i need https url for Android Pie or later. So thats why I setup kinda same as yours. :) Btw the error come up under upload method.</p><p>Exact line: <br>`let task = session.multipartUpload(params, request);`</p><p>PS:<br>using POSTMAN my upload api works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4282191613">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4282191613">10</a> (In reply to <a href="#c_4282180102">#9</a>) by Raymond Camden
		posted on 1/12/2019 at 6:51 PM
		</div>
		<div class="comment_text"><p>Sorry - really not sure what's up there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4282225236">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_joeE45BaBX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4282225236">11</a> (In reply to <a href="#c_4282191613">#10</a>) by john andrew
		posted on 1/12/2019 at 7:17 PM
		</div>
		<div class="comment_text"><p>no worries. Ill update you when I have any progress on my issue. thanks for the reply</p></div>
	</div>
</div>
		
<div class="comment" id="c_4282252287">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_joeE45BaBX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4282252287">12</a> (In reply to <a href="#c_4282225236">#11</a>) by john andrew
		posted on 1/12/2019 at 7:38 PM
		</div>
		<div class="comment_text"><p>Update: after reinstalling plugin and platform your code works perfectly. thank you so much &lt;3</p></div>
	</div>
</div>
		
<div class="comment" id="c_4285565980">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4285565980">13</a> (In reply to <a href="#c_4282252287">#12</a>) by Raymond Camden
		posted on 1/14/2019 at 3:32 PM
		</div>
		<div class="comment_text"><p>Glad to help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4817208797">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_iyviLFXMWc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4817208797">14</a> by Suman Biswas
		posted on 3/2/2020 at 2:20 AM
		</div>
		<div class="comment_text"><p>Wow.. <br>First time trying naivescrit and your article make me happy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4817224184">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4817224184">15</a> (In reply to <a href="#c_4817208797">#14</a>) by Raymond Camden
		posted on 3/2/2020 at 2:42 AM
		</div>
		<div class="comment_text"><p>Glad it helped!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4817241590">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_iyviLFXMWc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4817241590">16</a> (In reply to <a href="#c_4817224184">#15</a>) by Suman Biswas
		posted on 3/2/2020 at 3:08 AM
		</div>
		<div class="comment_text"><p>I just visited your YouTube channel, and watching 'From Vue to NativeScript-vue'. Love you man 😘</p></div>
	</div>
</div>
		