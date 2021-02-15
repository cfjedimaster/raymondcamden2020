---
layout: page
title: Contact Me
description: Drop me a line...
banner_image: /images/banners/contact_header2.jpg
---

<script>
document.addEventListener('DOMContentLoaded', init, false);
function init() {
	let form = document.querySelector('#contactForm');
	form.addEventListener('submit', sendContact, false);
}

function sendContact(e) {
	e.preventDefault();
	let data = {
		name: document.querySelector('#contact_name').value,
		email: document.querySelector('#email').value,
		comments: document.querySelector('#contact_comments').value
	}

	fetch('/.netlify/functions/sendComments', {
		method:'post',
		body:JSON.stringify(data)
	}).then(res => res.text())
	.then(res => {
		document.location.href = '/thankyou';
	});

}
</script>

Have a question you want answered? Is there something you would like me to write about on the blog? Just use the form below to reach out to me. I can’t promise I will respond to every question, but I will try to either respond or post an entry to the blog relating to your inquiry.

If you are asking about a particular blog entry, *please* share the URL of the entry you are asking about.

Another note - I cannot (and will not!) provide support for ColdFusion UI controls like cfgrid, cfinput, etc. I've discussed why multiple times and have even provided [direction](https://github.com/cfjedimaster/ColdFusion-UI-the-Right-Way) about how to move away from them.

Finally - I do not accept paid article submissions or infographics.

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
<!--
<form action="https://formspree.io/amevkqex" method="POST" id="contactform">
-->
<form action="" method="POST" id="contactForm">


<label for="contact_name">Name: </label>
<input type="text" name="name" id="contact_name" required><br/>

<label for="email">Email: </label>
<input type="email" name="replyto" id="email" required><br/>

<label for="contact_comments">Comments: </label><br/>
<textarea name="comments" id="contact_comments" required></textarea>

<p>	
<input type="submit" value="Send" id="contactSubmit">
</p>

</form>

<i>Header image by <a href="https://unsplash.com/photos/hjwKMkehBco?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Alvaro Serrano</a> on Unsplash.</i>