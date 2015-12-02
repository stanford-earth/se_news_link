<?php
/**
 * @file
 * news_link.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function news_link_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news_link content'.
  $permissions['create news_link content'] = array(
    'name' => 'create news_link content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_link content'.
  $permissions['delete any news_link content'] = array(
    'name' => 'delete any news_link content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_link content'.
  $permissions['delete own news_link content'] = array(
    'name' => 'delete own news_link content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_link content'.
  $permissions['edit any news_link content'] = array(
    'name' => 'edit any news_link content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_link content'.
  $permissions['edit own news_link content'] = array(
    'name' => 'edit own news_link content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
