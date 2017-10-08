<?php
/**
 * @file
 * sac_bk_home_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function sac_bk_home_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'certifications';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'certications';
  $fe_block_boxes->body = '<div class="certif-wrapper">
<div class="certif"><img alt="" height="200" src="/sites/default/files/dekra.png" width="200" />
<p>Dekra</p>
</div>

<div class="certif"><img alt="" height="661" src="/sites/default/files/gnfa.png" width="1200" />
<p>Dekra</p>
</div>

<div class="certif"><img alt="" height="174" src="/sites/default/files/aliapur.png" width="473" />
<p>Dekra</p>
</div>
</div>
';

  $export['certications'] = $fe_block_boxes;

  return $export;
}
