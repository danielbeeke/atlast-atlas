<?php
/**
 * @file
 * atlast_map_locations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atlast_map_locations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function atlast_map_locations_views_api() {
  return array("api" => "3.0");
}

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
