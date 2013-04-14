<?php
/**
 * @file
 * atlast_map_locations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function atlast_map_locations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-atlast_instance-field_atlast_instance_bounds'
  $field_instances['node-atlast_instance-field_atlast_instance_bounds'] = array(
    'bundle' => 'atlast_instance',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atlast_instance_bounds',
    'label' => 'Bounds',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-atlast_instance-field_atlast_instance_polygon'
  $field_instances['node-atlast_instance-field_atlast_instance_polygon'] = array(
    'bundle' => 'atlast_instance',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atlast_instance_polygon',
    'label' => 'Polygon',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'leaflet_geojson_widget',
      'settings' => array(
        'leaflet_geojson_widget_center_lat' => 52.093008,
        'leaflet_geojson_widget_center_lon' => 5.480346,
        'leaflet_geojson_widget_map' => 'mapbox-warden',
        'leaflet_geojson_widget_tools' => array(
          'circle' => 0,
          'marker' => 0,
          'polygon' => 'polygon',
          'polyline' => 0,
          'rectangle' => 0,
        ),
        'leaflet_geojson_widget_zoom' => 6,
      ),
      'type' => 'leaflet_geojson_widget',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-map_location-body'
  $field_instances['node-map_location-body'] = array(
    'bundle' => 'map_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-map_location-field_geojson'
  $field_instances['node-map_location-field_geojson'] = array(
    'bundle' => 'map_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geojson',
    'label' => 'Geojson',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'leaflet_geojson_widget',
      'settings' => array(
        'leaflet_geojson_widget_center_lat' => 52.093008,
        'leaflet_geojson_widget_center_lon' => 5.480346,
        'leaflet_geojson_widget_map' => 'mapbox-warden',
        'leaflet_geojson_widget_tools' => array(
          'circle' => 0,
          'marker' => 'marker',
          'polygon' => 'polygon',
          'polyline' => 0,
          'rectangle' => 'rectangle',
        ),
        'leaflet_geojson_widget_zoom' => 6,
      ),
      'type' => 'leaflet_geojson_widget',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Bounds');
  t('Geojson');
  t('Polygon');

  return $field_instances;
}
