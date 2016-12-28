<?php

/**
 * @file
 * Display Suite 1 column template with layout wrapper.
 */
?>
<div class="home-services-bg" style="background-image: url('<?php print file_create_url($content['field_se_image_accueil'][0]['#item']['uri']); ?>');">
  <h2><?php print render($content['title']); ?></h2>
</div>