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
  $ds_fieldsetting->id = 'node|staff|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'staff';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_department' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'of',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'person-area',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-first',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-last',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_middle_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-middle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_title_position_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'person-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|staff|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_staff_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|staff|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'staff';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sunetid',
        1 => 'field_first_name',
        2 => 'field_middle_name',
        3 => 'field_last_name',
        4 => 'field_title_position_unlimited',
        5 => 'field_image_single_public',
        6 => 'field_email',
        7 => 'field_department',
        8 => 'field_salutation',
        9 => 'field_body',
        10 => 'field_phone',
      ),
    ),
    'fields' => array(
      'field_sunetid' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_middle_name' => 'ds_content',
      'field_last_name' => 'ds_content',
      'field_title_position_unlimited' => 'ds_content',
      'field_image_single_public' => 'ds_content',
      'field_email' => 'ds_content',
      'field_department' => 'ds_content',
      'field_salutation' => 'ds_content',
      'field_body' => 'ds_content',
      'field_phone' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
  );
  $export['node|staff|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|staff|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'staff';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_name',
        1 => 'group_wrapper_position',
        2 => 'field_first_name',
        3 => 'field_middle_name',
        4 => 'field_image_single_public',
        5 => 'field_title_position_unlimited',
        6 => 'field_last_name',
        7 => 'field_department',
      ),
    ),
    'fields' => array(
      'group_wrapper_name' => 'ds_content',
      'group_wrapper_position' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_middle_name' => 'ds_content',
      'field_image_single_public' => 'ds_content',
      'field_title_position_unlimited' => 'ds_content',
      'field_last_name' => 'ds_content',
      'field_department' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|staff|teaser'] = $ds_layout;

  return $export;
}