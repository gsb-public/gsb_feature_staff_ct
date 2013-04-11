<?php
/**
 * @file
 * gsb_feature_staff_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_staff_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|staff|media_contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'staff';
  $ds_fieldsetting->view_mode = 'media_contact';
  $ds_fieldsetting->settings = array(
    'field_title_position_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Contact',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|staff|media_contact'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_staff_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|staff|media_contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'staff';
  $ds_layout->view_mode = 'media_contact';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_position_unlimited',
        1 => 'group_name_wrapper',
        2 => 'field_email',
        3 => 'field_phone',
        4 => 'field_salutation',
        5 => 'field_first_name',
        6 => 'field_middle_name',
        7 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'field_title_position_unlimited' => 'ds_content',
      'group_name_wrapper' => 'ds_content',
      'field_email' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_salutation' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_middle_name' => 'ds_content',
      'field_last_name' => 'ds_content',
    ),
    'limit' => array(
      'field_title_position_unlimited' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|staff|media_contact'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_staff_ct_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'media_contact';
  $ds_view_mode->label = 'Media Contact';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['media_contact'] = $ds_view_mode;

  return $export;
}
