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

  // Exported menu link: menu-footer-menu_hosted-by-university-of-missouri-library-systems:http://library.missouri.edu.
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
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_about:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5.
  $menu_links['menu-side-menu_about:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'about',
      'identifier' => 'menu-side-menu_about:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5.
  $menu_links['menu-side-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'Conditions of use',
    'options' => array(
      'fragment' => 'conditions',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_copyright:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5.
  $menu_links['menu-side-menu_copyright:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'Copyright',
    'options' => array(
      'fragment' => 'copyright',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_copyright:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_library-locations:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5.
  $menu_links['menu-side-menu_library-locations:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'Library Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'library-locations',
      'identifier' => 'menu-side-menu_library-locations:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Conditions of use');
  t('Copyright');
  t('Hosted by University of Missouri Library Systems');
  t('Library Locations');

  return $menu_links;
}
