let is_disqus_loaded = false;
function loadComments(){
	console.log('load comments');
	if(!is_disqus_loaded){
		is_disqus_loaded = true;
		const d = document, s = d.createElement('script');
		s.src = 'https://raymondcamden.disqus.com/embed.js';
		(d.head || d.body).appendChild(s);
	}
}

// load comments for search engines to index
if(/bot|google|baidu|bing|msn|duckduckgo|slurp|yandex/i.test(navigator.userAgent)){
	loadComments();
}
// load comments if URL hash contains #comment
if(location && location.hash && location.hash.includes('comment')){
	loadComments();
}
// load comments when comments enter viewport
if(!!window.IntersectionObserver){
	const commentBox = document.querySelector('.comments-area');

	const intersectionObserver = new IntersectionObserver(function(entries, observer){
		if(entries && entries[0] && entries[0].isIntersecting){
			loadComments();
			observer.unobserve(commentBox);
		}
	});
	intersectionObserver.observe(commentBox);
}