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

  // Exported menu link: main-menu_about:node/1
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_browse:browse
  $menu_links['main-menu_browse:browse'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse',
    'router_path' => 'browse',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_browse:browse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_search:node/2
  $menu_links['main-menu_search:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'main-menu_search:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5
  $menu_links['menu-footer-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'Conditions of Use',
    'options' => array(
      'fragment' => 'condtions',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact-us:node/3
  $menu_links['menu-footer-menu_contact-us:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'menu-footer-menu_contact-us:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_copyright:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5
  $menu_links['menu-footer-menu_copyright:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'Copyright',
    'options' => array(
      'fragment' => 'copyright',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_copyright:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
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
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-sidebar-menu_about:node/1
  $menu_links['menu-sidebar-menu_about:node/1'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sidebar-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-sidebar-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5
  $menu_links['menu-sidebar-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    'router_path' => 'uuid',
    'link_title' => 'Conditions of Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'condtions',
      'identifier' => 'menu-sidebar-menu_conditions-of-use:uuid/node/dcd2f72e-91ee-4c5f-b656-1845ff5c16c5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-sidebar-menu_copyright:node/5
  $menu_links['menu-sidebar-menu_copyright:node/5'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Copyright',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sidebar-menu_copyright:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-sidebar-menu_library-locations:islandora/object
  $menu_links['menu-sidebar-menu_library-locations:islandora/object'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'islandora/object',
    'router_path' => 'islandora',
    'link_title' => 'Library Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sidebar-menu_library-locations:islandora/object',
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
  t('Browse');
  t('Conditions of Use');
  t('Contact Us');
  t('Copyright');
  t('Home');
  t('Hosted by University of Missouri Library Systems');
  t('Library Locations');
  t('Search');


  return $menu_links;
}
