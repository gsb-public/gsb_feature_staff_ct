<?php
/**
 * @file
 * gsb_feature_staff_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_staff_ct_taxonomy_default_vocabularies() {
  return array(
    'department' => array(
      'name' => 'Department',
      'machine_name' => 'department',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
