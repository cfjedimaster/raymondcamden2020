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

    });

}(jQuery));

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
        
        var ezstandalone = ezstandalone || {};
        ezstandalone.cmd = ezstandalone.cmd || [];
        ezstandalone.cmd.push(function () {
            ezstandalone.setDisablePersonalizedStatistics(!hasConsented);
            ezstandalone.setDisablePersonalizedAds(!hasConsented);
            ezstandalone.setEzoicAnchorAd(false);
            ezstandalone.define(101);
            ezstandalone.enable();
            ezstandalone.display();
        });
        
    },
    "onStatusChange": function (status, chosenBefore) {
        var hasConsented = this.hasConsented();
        
        var ezstandalone = ezstandalone || {};
        ezstandalone.cmd = ezstandalone.cmd || [];
        ezstandalone.cmd.push(function () {
            ezstandalone.setDisablePersonalizedStatistics(!hasConsented);
            ezstandalone.setDisablePersonalizedAds(!hasConsented);
            ezstandalone.setEzoicAnchorAd(false);
            ezstandalone.define(101);
            ezstandalone.enable();
            ezstandalone.display();
        });
        
    },
    "law": {
        "regionalLaw": true,
    },
    "location": false,
});

if ('serviceWorker' in navigator) {
  // Use the window load event to keep the page load performant
  window.addEventListener('load', () => {
    navigator.serviceWorker.register('/service-worker.js');
  });
}