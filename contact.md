---
layout: page
title: Contact Me
description: Drop me a line...
banner_image: /images/banners/contact_header2.jpg
---

Have a question you want answered? Is there something you would like me to write about on the blog? Just use the form below to reach out to me. I can’t promise I will respond to every question, but I will try to either respond or post an entry to the blog relating to your inquiry.

If you are asking about a particular blog entry, *please* share the URL of the entry you are asking about.

Another note - I cannot (and will not!) provide support for ColdFusion UI controls like cfgrid, cfinput, etc. I've discussed why multiple times and have even provided [direction](https://github.com/cfjedimaster/ColdFusion-UI-the-Right-Way) about how to move away from them.

Finally - I do not accept paid article submissions or infographics.

<script>
document.addEventListener("DOMContentLoaded", function() {

	var $sub = $("#_subject");
	$("#email").on("input", function() {
		$sub.val("Blog Contact Form (" + $(this).val() + ")");
	});
	
}, false);
</script>

<style>
label {
	display: inline-block;
	width: 200px;
	padding-bottom:25px;
}
input[type=text], input[type=email] {
	width: 400px;
}
input[type=submit] {
	margin-top:25px;
}
textarea {
	width: 100%;
}
</style>

<form method="POST" id="contactform" data-netlify="true" name="contact" action="/thankyou">

<label for="contact_name">Name: </label>
<input type="text" name="name" id="contact_name" required><br/>

<label for="email">Email: </label>
<input type="email" name="_replyto" id="email" required><br/>

<label for="contact_comments">Comments: </label><br/>
<textarea name="comments" id="contact_comments" required></textarea>

<p>	
<input type="submit" value="Send" id="contactSubmit">
</p>

</form>

<i>Header image by <a href="https://unsplash.com/photos/hjwKMkehBco?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Alvaro Serrano</a> on Unsplash.</i>