---
layout: page
title: Contact Me
description: Drop me a line...
---

{% comment %}
banner_image: /images/banners/contact_header2.jpg
removed image fo rnow...
{% endcomment %}

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

Finally - I do not accept paid article submissions or infographics.

<style>
input[type=submit] {
	margin-top:15px;
}

</style>
<!--
<form action="https://formspree.io/amevkqex" method="POST" id="contactform">
-->
<form action="" method="POST" id="contactForm">

<div class="form-group">
<label for="contact_name">Name: </label>
<input type="text" name="name" id="contact_name" required>
</div>

<div class="form-group">
<label for="email">Email: </label>
<input type="email" name="replyto" id="email" required>
</div>

<div class="form-group">
<label for="contact_comments">Comments: </label>
<textarea name="comments" id="contact_comments" required></textarea>
</div>

<div class="form-group">
<input type="submit" value="Send" id="contactSubmit" class="button">
</div>

</div>
</form>
