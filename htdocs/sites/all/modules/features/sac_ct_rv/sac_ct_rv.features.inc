<?php
/**
 * @file
 * sac_ct_rv.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sac_ct_rv_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sac_ct_rv_node_info() {
  $items = array(
    'rendez_vous' => array(
      'name' => t('Rendez vous'),
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

/**
 * Implements hook_default_work_calendar().
 */
function sac_ct_rv_default_work_calendar() {
  $items = array();
  $items['working_days'] = entity_import('work_calendar', '{
    "name" : "working_days",
    "label" : "Working_days",
    "description" : "",
    "week" : "62",
    "week_days" : {
      "Monday" : "Monday",
      "Tuesday" : "Tuesday",
      "Wednesday" : "Wednesday",
      "Thursday" : "Thursday",
      "Friday" : "Friday"
    },
    "rdf_mapping" : []
  }');
  return $items;
}
