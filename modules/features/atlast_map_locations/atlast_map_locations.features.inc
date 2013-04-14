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
    'atlast_instance' => array(
      'name' => t('Atlast Instance'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
