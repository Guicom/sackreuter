<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?> row-eq-height center">


<?php if ($header): ?>
  <div class="view-header-left">
    <div class="view-header-left-wrapper">
      <h2 class="title-underline-right big"><?php print t('Un savoir faire à votre service'); ?></h2>
      <?php print $header; ?>
      <img class="mir-rede" src="/sites/all/themes/sackreuter/images/mir_rede_elsassisch_2016.jpg">
    </div>
  </div>
<?php endif; ?>

<?php if ($rows): ?>
  <div class="view-content-right">
    <?php print $rows; ?>
  </div>
<?php endif; ?>


</div><?php /* class view */ ?>