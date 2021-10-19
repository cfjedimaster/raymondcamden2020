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

    // Responsive video embeds
    $('.post-content').fitVids();

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
