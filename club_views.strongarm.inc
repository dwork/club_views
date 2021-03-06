<?php
/**
 * @file
 * club_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function club_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_nolink_tag';
  $strongarm->value = '<a>';
  $export['special_menu_items_nolink_tag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_separator_tag';
  $strongarm->value = '<span>';
  $export['special_menu_items_separator_tag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_separator_value';
  $strongarm->value = '<hr>';
  $export['special_menu_items_separator_value'] = $strongarm;

  return $export;
}
