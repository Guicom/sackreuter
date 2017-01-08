<?php
/**
 * @file
 * field_ct_blog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function field_ct_blog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-blog-body'.
  $field_instances['node-blog-body'] = array(
    'bundle' => 'blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'listing' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 150,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'services_home' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-blog-field_offre_image_accueil'.
  $field_instances['node-blog-field_offre_image_accueil'] = array(
    'bundle' => 'blog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'vignette_home',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'listing' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'services_home' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_offre_image_accueil',
    'label' => 'Image Accueil',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 241,
              'width' => 360,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image Accueil');

  return $field_instances;
}
