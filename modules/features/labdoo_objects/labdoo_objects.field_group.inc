<?php
/**
 * @file
 * labdoo_objects.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function labdoo_objects_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|laptop|default';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_laptop_information';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_additional_editors',
      1 => 'field_tagger',
      2 => 'field_additional_notification_em',
      3 => 'field_cpu',
      4 => 'field_memory',
      5 => 'field_hard_drive',
      6 => 'field_current_operating_system',
      7 => 'field_additional_notes',
      8 => 'field_cpu_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $export['group_additional_information|node|laptop|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|laptop|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_laptop_data';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_additional_editors',
      1 => 'field_additional_notes',
      2 => 'field_additional_notification_em',
      3 => 'field_cpu',
      4 => 'field_cpu_type',
      5 => 'field_current_operating_system',
      6 => 'field_hard_drive',
      7 => 'field_memory',
      8 => 'field_picture',
      9 => 'field_tagger',
      10 => 'field_additional_followers',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional_information|node|laptop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|node|laptop|default';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_laptop_information';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_edoovillage_destination',
      1 => 'field_hub_laptop',
      2 => 'field_manager',
      3 => 'field_serial_number',
      4 => 'field_status',
      5 => 'field_model',
      6 => 'field_picture',
      7 => 'field_device_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $export['group_basic_information|node|laptop|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|node|laptop|form';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_laptop_data';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_device_type',
      1 => 'field_edoovillage_destination',
      2 => 'field_hub_laptop',
      3 => 'field_manager',
      4 => 'field_model',
      5 => 'field_serial_number',
      6 => 'field_status',
      7 => 'title',
      8 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-basic-information field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic_information|node|laptop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_laptop_data|node|laptop|form';
  $field_group->group_name = 'group_laptop_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '0',
    'children' => array(
      0 => 'group_additional_information',
      1 => 'group_basic_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-laptop-data field-group-htabs',
      ),
    ),
  );
  $export['group_laptop_data|node|laptop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_laptop_information|node|laptop|default';
  $field_group->group_name = 'group_laptop_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'laptop';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Laptop Information',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_information',
      1 => 'group_additional_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-laptop-information field-group-htabs',
      ),
    ),
  );
  $export['group_laptop_information|node|laptop|default'] = $field_group;

  return $export;
}