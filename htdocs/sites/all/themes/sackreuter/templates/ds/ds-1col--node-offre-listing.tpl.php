<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">
<div class="type <?php print drupal_html_class($field_type[0]['taxonomy_term']->name); ?>"><?php print $field_type[0]['taxonomy_term']->name; ?></div>
<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<?php print $ds_content; ?>
</<?php print $ds_content_wrapper ?>>
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
