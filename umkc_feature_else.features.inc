<?php
/**
 * @file
 * umkc_feature_else.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umkc_feature_else_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function umkc_feature_else_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function umkc_feature_else_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.type',
    'field_type' => 'sort_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Type',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title:',
      'link_to_object' => 1,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Date:',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'sort_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Topic',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'sort_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'dc.publisher',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Creator:',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'result_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Description:',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'dc.type',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Type',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Topic',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'dc.format',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Format',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
);
}

/**
 * Implements hook_node_info().
 */
function umkc_feature_else_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('Slideshow content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
