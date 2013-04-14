<?php
/**
 * @file
 * atlast_map_locations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atlast_map_locations_user_default_permissions() {
  $permissions = array();

  // Exported permission: create atlast_instance content.
  $permissions['create atlast_instance content'] = array(
    'name' => 'create atlast_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create map_location content.
  $permissions['create map_location content'] = array(
    'name' => 'create map_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any atlast_instance content.
  $permissions['delete any atlast_instance content'] = array(
    'name' => 'delete any atlast_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any map_location content.
  $permissions['delete any map_location content'] = array(
    'name' => 'delete any map_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own atlast_instance content.
  $permissions['delete own atlast_instance content'] = array(
    'name' => 'delete own atlast_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own map_location content.
  $permissions['delete own map_location content'] = array(
    'name' => 'delete own map_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any atlast_instance content.
  $permissions['edit any atlast_instance content'] = array(
    'name' => 'edit any atlast_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any map_location content.
  $permissions['edit any map_location content'] = array(
    'name' => 'edit any map_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own atlast_instance content.
  $permissions['edit own atlast_instance content'] = array(
    'name' => 'edit own atlast_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own map_location content.
  $permissions['edit own map_location content'] = array(
    'name' => 'edit own map_location content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
