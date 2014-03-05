<?php
/**
 * @file
 * umkc_feature_else.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function umkc_feature_else_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Read more »';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more »';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay_ms'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['clicknext'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_crop'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_double_tap'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['height'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_mode'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_time'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_margin'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan_smoothness'] = '12';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['initial_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['layer_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_fade_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_transition_speed'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['overlay_opacity'] = '0.85';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['pause_on_interaction'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['popup_links'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['preload'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['queue'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['responsive'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_info'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_counter'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_imagenav'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['swipe'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_fit'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_margin'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_quality'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumbnails'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['touch_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['transition_speed'] = '400';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['debug'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['keep_source'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['strip_images'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Slides */
  $handler->display->display_options['fields']['field_slides_image']['id'] = 'field_slides_image';
  $handler->display->display_options['fields']['field_slides_image']['table'] = 'field_data_field_slides_image';
  $handler->display->display_options['fields']['field_slides_image']['field'] = 'field_slides_image';
  $handler->display->display_options['fields']['field_slides_image']['label'] = '';
  $handler->display->display_options['fields']['field_slides_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slides_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slides_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slides_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slides' => 'slides',
  );
  $handler->display->display_options['path'] = 'frontpage';

  /* Display: Welcome Message */
  $handler = $view->new_display('block', 'Welcome Message', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Welcome Message';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $translatables['front_page'] = array(
    t('Master'),
    t('Frontpage'),
    t('Read more »'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('Welcome Message'),
    t('more'),
  );
  $export['front_page'] = $view;

  $view = new view();
  $view->name = 'galleria_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galleria View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slides_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slides_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay_ms'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['clicknext'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_crop'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_double_tap'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['height'] = 'auto';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_mode'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_time'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_crop'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_margin'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan_smoothness'] = '12';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['initial_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['layer_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_fade_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_transition_speed'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['max_scale_ratio'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['min_scale_ratio'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['overlay_opacity'] = '0.85';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['pause_on_interaction'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['popup_links'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['preload'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['queue'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['responsive'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_info'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_counter'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_imagenav'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['swipe'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_fit'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_margin'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_quality'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumbnails'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['touch_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['transition_speed'] = '400';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['debug'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['keep_source'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['strip_images'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image Slides */
  $handler->display->display_options['fields']['field_slides_image']['id'] = 'field_slides_image';
  $handler->display->display_options['fields']['field_slides_image']['table'] = 'field_data_field_slides_image';
  $handler->display->display_options['fields']['field_slides_image']['field'] = 'field_slides_image';
  $handler->display->display_options['fields']['field_slides_image']['label'] = '';
  $handler->display->display_options['fields']['field_slides_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slides_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slides_image']['type'] = 'galleria';
  $handler->display->display_options['fields']['field_slides_image']['settings'] = array(
    'optionset' => 'default',
  );
  $handler->display->display_options['fields']['field_slides_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );

  /* Display: Galleria Block */
  $handler = $view->new_display('block', 'Galleria Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '99999999';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['path'] = 'home';

  /* Display: Welcome Message */
  $handler = $view->new_display('block', 'Welcome Message', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Welcome Message';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more »';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'about';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['galleria_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Galleria Block'),
    t('Page'),
    t('Welcome Message'),
    t('Read more »'),
  );
  $export['galleria_view'] = $view;

  return $export;
}
