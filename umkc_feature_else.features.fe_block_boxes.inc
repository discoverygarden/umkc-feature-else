<?php
/**
 * @file
 * umkc_feature_else.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function umkc_feature_else_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Frontpage browse block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'browse_collections';
  $fe_block_boxes->body = '<ul><li class="topic"><a href="/islandora/object" title="Browse by Topic">Topic</a></li><li class="type"><a href="/islandora/object" title="Browse by Type">Type</a></li><li class="collection"><a href="/islandora/object" title="Browse by Collection">Collection</a></li></ul>';

  $export['browse_collections'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for viewing slides';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'slides_block';
  $fe_block_boxes->body = 'slides';

  $export['slides_block'] = $fe_block_boxes;

  return $export;
}
