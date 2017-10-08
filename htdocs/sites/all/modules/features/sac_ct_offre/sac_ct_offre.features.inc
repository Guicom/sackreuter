<?php
/**
 * @file
 * sac_ct_offre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sac_ct_offre_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sac_ct_offre_node_info() {
  $items = array(
    'offre' => array(
      'name' => t('Actualité / Promotion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
