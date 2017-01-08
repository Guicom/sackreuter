(function ($) {
  Drupal.behaviors.sackreuter = {
    attach: function (context, settings) {
      $('select').selectBoxIt({
        autoWidth: false
      });

      $('a[href*=#]:not([href=#])').click(function () {
        if (location.pathname.replace(/^\//, '') == this.pathname.replace(/^\//, '') && location.hostname == this.hostname) {
          var headerHeight = $('.header-main').outerHeight();
          var target = $(this.hash);
          target = target.length ? target : $('[name=' + this.hash.slice(1) + ']');
          if (target.length) {
            $('html,body').animate({
              scrollTop: target.offset().top - headerHeight - 120
            }, 500);
            return false;
          }
        }
      });

    }
  };
}(jQuery));
