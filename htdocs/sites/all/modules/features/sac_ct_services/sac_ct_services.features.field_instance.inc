<?php
/**
 * @file
 * sac_ct_services.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sac_ct_services_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-services-field_se_detail_service'.
  $field_instances['node-services-field_se_detail_service'] = array(
    'bundle' => 'services',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'services_home' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_se_detail_service',
    'label' => 'Détail du service',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'nœud',
          'match_operator' => 'STARTS_WITH',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-services-field_se_image_accueil'.
  $field_instances['node-services-field_se_image_accueil'] = array(
    'bundle' => 'services',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'services_home' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_se_image_accueil',
    'label' => 'Image accueil',
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
              'height' => 100,
              'width' => 100,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-services_detail-field_se_det_bg'.
  $field_instances['node-services_detail-field_se_det_bg'] = array(
    'bundle' => 'services_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_se_det_bg',
    'label' => 'Image de fond',
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
              'height' => 100,
              'width' => 100,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-services_detail-field_se_det_texte'.
  $field_instances['node-services_detail-field_se_det_texte'] = array(
    'bundle' => 'services_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_se_det_texte',
    'label' => 'Texte',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Détail du service');
  t('Image accueil');
  t('Image de fond');
  t('Texte');

  return $field_instances;
}
