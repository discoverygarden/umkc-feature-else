<?php
/**
 * @file
 * umkc_feature_else.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function umkc_feature_else_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-browse_collections'] = array(
    'cache' => -1,
    'css_class' => 'browse-collections',
    'custom' => 0,
    'machine_name' => 'browse_collections',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -27,
      ),
    ),
    'title' => 'Browse Our Collections',
    'visibility' => 1,
  );

  $export['block-slides_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'slides_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -22,
      ),
    ),
    'title' => 'Slides Block',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_compound_object-compound_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_navigation',
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_solr-advanced'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advanced',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora-search',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -29,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '<front>
islandora/search*
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'hero',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -30,
      ),
    ),
    'title' => 'Sort by:',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-recent_activity'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_activity',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_search'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_search',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_usage'] = array(
    'cache' => 1,
    'css_class' => 'icon-block match-height',
    'custom' => 0,
    'delta' => 'top_usage',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'front_boxes',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-side-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-side-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'about
islandora-search',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['node-recent'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_scholar',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['umkcdora-umkcdora_mobile_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'umkcdora_mobile_facets',
    'module' => 'umkcdora',
    'node_types' => array(),
    'pages' => 'islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -1,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0e421ddcad5e4ddbe2f4e87f52252332'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0e421ddcad5e4ddbe2f4e87f52252332',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-30151412eb73ff9de45ec4209bd0898d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '30151412eb73ff9de45ec4209bd0898d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7518164537523ba73652c9a5fd647fe6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7518164537523ba73652c9a5fd647fe6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-browse-umkc_browse'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'browse-umkc_browse',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-galleria_view-block'] = array(
    'cache' => -1,
    'css_class' => 'slideshow',
    'custom' => 0,
    'delta' => 'galleria_view-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-galleria_view-block_1'] = array(
    'cache' => -1,
    'css_class' => 'welcome-message',
    'custom' => 0,
    'delta' => 'galleria_view-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-object_visitors_by_month-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_visitors_by_month-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_site_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_site_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-topics-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'topics-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-topics-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'topics-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_scholar' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_scholar',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
