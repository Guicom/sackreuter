<?php

/**
 * @file
 * Display Suite 1 column template with layout wrapper.
 */
?>
<div class="home-services-bg" style="background-image: url('<?php print file_create_url($field_offre_image_accueil[LANGUAGE_NONE][0]['uri']); ?>');">
  <?php if (isset($field_type[0]['taxonomy_term']->name)): ?>
    <div class="type <?php print drupal_html_class($field_type[0]['taxonomy_term']->name); ?>"><?php print $field_type[0]['taxonomy_term']->name; ?></div>
  <?php endif; ?>
  <h2><?php print render($content['title']); ?></h2>
  <?php print render($content['node_link']); ?>
</div>