<?php
/**
 * @file
 * umkc_feature_else.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function umkc_feature_else_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_hosted-by-university-of-missouri-library-systems:http://library.missouri.edu
  $menu_links['menu-footer-menu_hosted-by-university-of-missouri-library-systems:http://library.missouri.edu'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://library.missouri.edu',
    'router_path' => '',
    'link_title' => 'Hosted by University of Missouri Library Systems',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_hosted-by-university-of-missouri-library-systems:http://library.missouri.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hosted by University of Missouri Library Systems');


  return $menu_links;
}
