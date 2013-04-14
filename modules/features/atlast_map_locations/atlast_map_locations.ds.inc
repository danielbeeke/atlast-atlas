<?php
/**
 * @file
 * atlast_map_locations.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function atlast_map_locations_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|map_location|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'map_location';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|map_location|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function atlast_map_locations_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|map_location|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'map_location';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-radix_moscone';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'regions' => array(
      'sidebar' => array(
        0 => 'body',
        1 => 'field_geojson',
      ),
    ),
    'fields' => array(
      'body' => 'sidebar',
      'field_geojson' => 'sidebar',
    ),
  );
  $export['node|map_location|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|map_location|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'map_location';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_geojson',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_geojson' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|map_location|teaser'] = $ds_layout;

  return $export;
}
