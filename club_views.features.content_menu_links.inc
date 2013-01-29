<?php
/**
 * @file
 * club_views.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function club_views_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:clubofficers
  $menu_links['main-menu:clubofficers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'clubofficers',
    'router_path' => 'clubofficers',
    'link_title' => 'Officers',
    'options' => array(
      'attributes' => array(
        'title' => 'List of chapter/club officers',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'clubmembers',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Officers');


  return $menu_links;
}
