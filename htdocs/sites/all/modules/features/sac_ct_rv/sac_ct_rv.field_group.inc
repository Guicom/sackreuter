<?php
/**
 * @file
 * sac_ct_rv.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sac_ct_rv_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coordonnees|node|rendez_vous|form';
  $field_group->group_name = 'group_coordonnees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rendez_vous';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coordonnées',
    'weight' => '3',
    'children' => array(
      0 => 'field_rv_nom',
      1 => 'field_rv_prenom',
      2 => 'field_rv_adresse',
      3 => 'field_rv_cp',
      4 => 'field_rv_ville',
      5 => 'field_rv_email',
      6 => 'field_rv_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coordonnees field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|rendez_vous|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rendez_vous';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Choisissez une date',
    'weight' => '2',
    'children' => array(
      0 => 'field_rv_time',
      1 => 'field_rv_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rendez_vous|node|rendez_vous|form';
  $field_group->group_name = 'group_rendez_vous';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rendez_vous';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mon rendez-vous',
    'weight' => '4',
    'children' => array(
      0 => 'field_rv_vehicule',
      1 => 'field_rv_year',
      2 => 'field_rv_prestation',
      3 => 'field_rv_remarque',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rendez-vous field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Choisissez une date');
  t('Coordonnées');
  t('Mon rendez-vous');

  return $field_groups;
}
