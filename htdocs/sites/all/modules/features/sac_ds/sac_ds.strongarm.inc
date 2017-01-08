<?php
/**
 * @file
 * sac_ds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sac_ds_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_blog';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_offre';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_rendez_vous';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_rendez_vous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_services';
  $strongarm->value = array(
    0 => 'default',
    1 => 'services_home',
  );
  $export['ds_extras_view_modes_services'] = $strongarm;

  return $export;
}
