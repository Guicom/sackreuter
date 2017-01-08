<?php
/**
 * @file
 * sac_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function sac_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: vignette_home.
  $styles['vignette_home'] = array(
    'label' => 'Vignette home',
    'effects' => array(
      1 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 240,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
