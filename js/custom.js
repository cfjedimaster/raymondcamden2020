/*
11/9/2021: Copied custom.js from the theme - this can be done better.
*/
/**
 * Main JS file for theme behaviours
 */
(function ($) {
  "use strict";

  var $window = $(window),
      $body = $('body'),
      $menuToggle = $('#menu-toggle'),
      $toTop = $('#back-to-top'),
      mobile = false;

  $(document).ready(function(){

    // Detect mobile
    isMobile();

    // Menu on small screens
    $menuToggle.on('click', function(e){
      $body.toggleClass('menu--opened');
      $menuToggle.blur();
      e.preventDefault();
    });
    $window.on('resize orientationchange', function() {
      isMobile();
      if (mobile === false) {
        $body.removeClass('menu--opened');
      }
    });

    // Gallery adjustments
    $( '.kg-gallery-image > img' ).each( function() {
      var _this = $(this),
        $container = _this.closest('.kg-gallery-image'),
        width = _this.attr('width'),
        height = _this.attr('height'),
        ratio = width / height;
      $container.css({'flex' : ratio + ' 1 0%' });
    });
    $('.kg-gallery-card').each( function() {
      var _this = $(this);
      _this.find('img').simpleLightbox({
        sourceAttr: 'src',
        captions: false,
        closeText: '<span aria-hidden="true" class="icon-close"></span>',
        navText: ['<span class="icon-arrow-left" aria-hidden="true"></span>','<span class="icon-arrow-right" aria-hidden="true"></span>']
      });
    });

    // Back to top button
    if (mobile === true) {
      $toTop.initCanvas();
    }
    $toTop.on('click', function(e) {
      $('html, body').animate({'scrollTop': 0});
      e.preventDefault();
    });
    $window.on('resize scroll', function () {
      if (mobile === true) {
        $toTop.initCanvas();
      } else {
        $toTop.hide();
        $toTop.find('canvas').remove();
      }
    });

  });

  function isMobile() {
    if ( $menuToggle.is(':hidden') ) {
      mobile = false;
    } else {
      mobile = true;
    }
  }

  function calcScrollPct() {
    var top = $window.scrollTop(),
        docH = $(document).height(),
        winH = $window.height(),
        pct = Math.ceil((top / (docH - winH)) * 10000) / 10000;
    return pct;
  }

  $.fn.initCanvas = function() {
    var _this = $(this),
        canvas = document.createElement('canvas');

    if (canvas.getContext) {
      var ctx = canvas.getContext('2d'),
          options = {
            lineWidth: 2,
            rotate: 0,
            size: _this.height(),
            colorProgress: '#d4a259',
            colorBackground: '#eee'
          },
          perc = calcScrollPct();
      _this.find('canvas').remove();
      if (perc < 0.1 && _this.css('opacity') !== 0) {
        _this.stop().fadeOut(300);
      } else if (perc >= 0.1) {
        _this.stop().fadeIn(600);
        _this.append(canvas);

        var scale = window.devicePixelRatio || 1;
        canvas.width = canvas.height = options.size * scale;
        ctx.scale(scale, scale);
        ctx.translate(options.size / 2, options.size / 2);
        ctx.rotate((-1 / 2 + options.rotate / 180) * Math.PI);
        drawCircle(options.colorProgress, options.colorBackground, options.lineWidth);
      }
    }

    function drawCircle(colorProgress, colorBackground, lineWidth) {
      ctx.clearRect(-(options.size) / 2, -(options.size) / 2, options.size, options.size);
      ctx.lineWidth = lineWidth;
      ctx.lineCap = 'round';
      // Background circle
      ctx.beginPath();
      ctx.arc(0, 0, (options.size - lineWidth) / 2, 0, Math.PI * 2, false);
      ctx.strokeStyle = colorBackground;
      ctx.stroke();
      ctx.closePath();
      // Progress circle
      ctx.beginPath();
      ctx.arc(0, 0, (options.size - lineWidth) / 2, 0, (Math.PI * 2) * perc, false);
      ctx.strokeStyle = colorProgress;
      ctx.stroke();
      ctx.closePath();
    }
  };

}(jQuery));


$(document).ready(function(){
    //blog posts only, cheap way to do this
    if(window.location.pathname.indexOf('/2') === 0) {
        doWebMentions();
        doSubscriptionForm();
    }
});

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

    let replies = mentions.filter(m => ['in-reply-to','mention-of'].indexOf(m['wm-property']) >= 0)
    .filter(m => m.author.name !== '')
    .sort((a, b) => {
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
        let title = `<h4>${replies.length} ${replies.length !== 1?'Replies':'Reply'}</h4>`;
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
        let title = `<h4>${likes.length} Like${likes.length !== 1?'s':''} and ${retweets.length} Retweet${retweets.length !== 1?'s':''}</h4>`;
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