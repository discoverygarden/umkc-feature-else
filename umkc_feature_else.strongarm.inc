<?php
/**
 * @file
 * umkc_feature_else.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umkc_feature_else_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display_table';
  $strongarm->value = array(
    'weight' => array(
      'bookmark' => '0',
      'default' => '0',
      'grid' => '0',
      'table' => '0',
    ),
    'default' => 'default',
    'enabled' => array(
      'grid' => 'grid',
      'bookmark' => 0,
      'default' => 'default',
      'table' => 0,
    ),
  );
  $export['islandora_solr_primary_display_table'] = $strongarm;

  return $export;
}
