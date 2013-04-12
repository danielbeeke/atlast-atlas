<?php
/**
 * @file
 * atlast_map_locations.features.inc
 */

/**
 * Implements hook_node_info().
 */
function atlast_map_locations_node_info() {
  $items = array(
    'map_location' => array(
      'name' => t('Map location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
