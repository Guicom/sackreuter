(function ($) {
  Drupal.behaviors.sac_rv = {
    attach: function (context, settings) {
      $('#rv-date').datetimepicker({
        format: "DD/MM/YYYY",
        locale: moment.locale('fr'),
        daysOfWeekDisabled: [0, 6],
        inline: true
      });

      $("#rv-date").on("dp.change", function(e) {
        $('#edit-field-rv-date-und-0-value').val(e.date);
      });
    }
  };
}(jQuery));