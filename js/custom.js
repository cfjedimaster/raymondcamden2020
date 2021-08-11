/**
 * Main JS file for BlogInn behaviours
 */

/*globals jQuery, document */
(function ($) {
    "use strict";

    $(document).ready(function(){
        // Responsive video embeds
        $('.entry-content').fitVids();

        // Navigation
        $('#menu-toggle').click(function(){
            var _this = $(this);
            _this.toggleClass( 'toggled-on' ).attr('aria-expanded', _this.attr('aria-expanded') === 'false' ? 'true' : 'false');
            $('.nav-menu').slideToggle();
        });
        $(window).bind('resize orientationchange', function() {
            if ( $('#menu-toggle').is(':hidden') ) {
                $('#menu-toggle').removeClass('toggled-on').attr('aria-expanded', 'false');
                $('.nav-menu').removeAttr('style');
            }
        });

        // Scroll to top
        $('#top-link').on('click', function(e) {
            $('html, body').animate({'scrollTop': 0});
            e.preventDefault();
        });

        //blog posts only, cheap way to do this
        if(window.location.pathname.indexOf('/2') === 0) {
            $('.entry-content > p:nth-of-type(3)').after('<div id="ezoic-pub-ad-placeholder-117"></div>');
            doWebMentions();
            doSubscriptionForm();
        }

        window.cookieconsent.initialise({
            "palette": {
                "popup": {
                    "background": "#000"
                },
                "button": {
                    "background": "#f1d600"
                },
            },
            "type": "opt-in",
            "content": {
                "href": "/privacy-policy/"
            },
            "revokable": true,
            "dismissOnWindowClick": true,
            "dismissOnScroll": 200,
            "onPopupOpen": function () {},
            "onInitialise": function (status) {
                var hasConsented = this.hasConsented();
                var ezstandalone = window.ezstandalone || {};
                ezstandalone.cmd = ezstandalone.cmd || [];
                ezstandalone.cmd.push(function () {
                    ezstandalone.setDisablePersonalizedStatistics(!hasConsented);
                    ezstandalone.setDisablePersonalizedAds(!hasConsented);
                    ezstandalone.setEzoicAnchorAd(false);
                    ezstandalone.define(101,102,117);
                    ezstandalone.enable();
                    ezstandalone.display();
                });
                
            },
            "onStatusChange": function (status, chosenBefore) {
                var hasConsented = this.hasConsented();
                var ezstandalone = window.ezstandalone || {};
                ezstandalone.cmd = ezstandalone.cmd || [];
                ezstandalone.cmd.push(function () {
                    ezstandalone.setDisablePersonalizedStatistics(!hasConsented);
                    ezstandalone.setDisablePersonalizedAds(!hasConsented);
                    ezstandalone.setEzoicAnchorAd(false);
                    ezstandalone.define(101,102,117);
                    ezstandalone.enable();
                    ezstandalone.display();
                });
                
            },
            "law": {
                "regionalLaw": true,
            },
            "location": false,
        });


    });

}(jQuery));

if ('serviceWorker' in navigator) {
  // Use the window load event to keep the page load performant
  window.addEventListener('load', () => {
    navigator.serviceWorker.register('/service-worker.js');
  });
}

async function doWebMentions() {
    let url = 'https://www.raymondcamden.com' + document.location.pathname;
    // remove possible trailing /
    if(url.slice(-1) === '/') url = url.substring(0, url.length-1);

    let mentions = await getWebmentions(url);
    console.log('mentions', mentions.length);

    let likes = mentions.filter(m => m['wm-property'] === 'like-of');
    console.log('Likes', likes.length);

    let retweets = mentions.filter(m => m['wm-property'] === 'repost-of');
    console.log('RTs', retweets.length);

    let replies = mentions.filter(m => ['in-reply-to','mention-of'].indexOf(m['wm-property']) >= 0).sort((a, b) => {
        let aDate = new Date(a.published);
        let bDate = new Date(b.published);
        if(aDate.getTime() < bDate.getTime()) return -1;
        if(aDate.getTime() > bDate.getTime()) return 1;
        return 0;
    });

    /*
    some replies do not have a content value, like a tweet with *just* an image. I could 
    maybe do it above all at once, but keeping it simpler....
    */
    replies = replies.filter(r => r.content);
    console.log('Replies', replies.length);

    if(replies.length) {
        let title = `<h3>${replies.length} ${replies.length !== 1?'Replies':'Reply'}</h3>`;
        let html = title;

        replies.forEach(m => {
            let iMention = `
            <div class="comment"">
                <div>
                    <img src="${m.author.photo?m.author.photo:'/images/blankavatar.gif'}" width="48" height="48" class="lazyload" alt="${m.author.name}">
                </div>
                <div>
                    <div class="comment_header">
                    Reply by ${m.author.name}
                    posted on ${dateFormat(m.published)}
                    </div>
                    <div class="comment_text">${truncate(m.content.text, 400)}</div>
                    <a href="${m.url}" target="_blank" rel="noopener noreferrer">
                    source <svg aria-hidden="true" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" width="10px"><path fill="currentColor" d="M432 320h-32a16 16 0 00-16 16v112H64V128h144a16 16 0 0016-16V80a16 16 0 00-16-16H48a48 48 0 00-48 48v352a48 48 0 0048 48h352a48 48 0 0048-48V336a16 16 0 00-16-16zM488 0H360c-21.37 0-32.05 25.91-17 41l35.73 35.73L135 320.37a24 24 0 000 34L157.67 377a24 24 0 0034 0l243.61-243.68L471 169c15 15 41 4.5 41-17V24a24 24 0 00-24-24z" /></svg>
                    </a>
                </div>
            </div>
            `;
            html += iMention;
        });
        
        $('#webmentions-replies').html(html);

    }

    if(likes.length || retweets.length) {
        let title = `<h3>${likes.length} Like${likes.length !== 1?'s':''} and ${retweets.length} Retweet${retweets.length !== 1?'s':''}</h3>`;
        let html = title;

        if(likes.length) {
            likes.forEach(l => {
                let iLike = '';
                if(l.author.photo) iLike = `<img src="${l.author.photo}" alt="${l.author.name}" width="48" height="48" class="lazyload">`;
                else iLike = `<img src="/images/blankavatar.gif" width="48" height="48" class="lazyload" alt="${l.author.name}">`;

                if(l.url) iLike = `<a href="${l.url}" target="_blank" rel="noopener noreferrer">` + iLike + '</a>';
                html += iLike;
            });
        }

        if(retweets.length) {
            let rtHTML = `<h3>${retweets.length} Retweet` + (retweets.length > 1?'s':'') + '</h3>';
            retweets.forEach(r => {
                let iRT = '';
                if(r.author.photo) iRT = `<img src="${r.author.photo}" alt="${r.author.name}" width="48" height="48" class="lazyload">`;
                else iRT = `<img src="/images/blankavatar.gif" width="48" height="48" class="lazyload" alt="${r.author.name}">`;

                if(r.url) iRT = `<a href="${r.url}" target="_blank" rel="noopener noreferrer">` + iRT + '</a>';
                html += iRT;
            });
        }

        $('#webmentions-likes').html(html);

    }

    if(replies.length || likes.length || retweets.length) $('.webmentions-area').show();

}

function truncate(s, len) {
    if(s.length < len) return s;
    else return s.substring(0,len-3)+'...';
}

function dateFormat(d) {
    if(!Intl || !Intl.DateTimeFormat) return d;
	d = new Date(d);
	return new Intl.DateTimeFormat().format(d) + ' at ' + new Intl.DateTimeFormat('en-US', {hour:'numeric',minute:'2-digit'}).format(d);
}

async function getWebmentions(url) {
 return new Promise((resolve, reject) => {
   let api = `https://webmention.io/api/mentions.jf2?target=${url}&per-page=200`;
   fetch(api)
   .then(res => res.json())
   .then(res => resolve(res.children));
 }); 
}

function doSubscriptionForm() {
    const SUBSCRIBE_API = '/.netlify/functions/newsletter-signup?email=';
    const subEmail = document.querySelector('#subEmail');
    const subButton = document.querySelector('#subButton');
    const subStatus = document.querySelector('#subStatus');

    subButton.addEventListener('click', () => {
        const email = subEmail.value;
        if(!email) return;
        console.log('add '+email);
        subButton.disabled = true;
        subStatus.innerHTML = 'Attempting to subscribe you...';
        fetch(SUBSCRIBE_API + email)
        .then(res => {
            return res.json()
        })
        .then(res => {
            console.log('status',res.status);
            if(res.status === 'subscribed') {
                subStatus.innerHTML = 'You have been subscribed!';
            } else if(res.status === 400) {
                subStatus.innerHTML = `There was an error: ${res.detail}`;
            }
            subButton.disabled = false;
        })
        .catch(e => {
            console.log('error result', e);
        });

    });
}