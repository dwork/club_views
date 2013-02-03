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

  // Exported menu link: main-menu:<nolink>
  $menu_links['main-menu:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Community▼',
    'options' => array(
      'attributes' => array(
        'title' => 'Community links - club members, officers and Executive Board membership',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:board
  $menu_links['main-menu:board'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'board',
    'router_path' => 'board',
    'link_title' => 'Executive Board',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Executive Board members',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:clubmembers
  $menu_links['main-menu:clubmembers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'clubmembers',
    'router_path' => 'clubmembers',
    'link_title' => 'Members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
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
    'weight' => '-49',
    'parent_path' => '<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community▼');
  t('Executive Board');
  t('Members');
  t('Officers');


  return $menu_links;
}
