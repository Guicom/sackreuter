<?php
/**
 * @file
 * sac_ct_offre.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sac_ct_offre_node_info() {
  $items = array(
    'offre' => array(
      'name' => t('Offre'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
