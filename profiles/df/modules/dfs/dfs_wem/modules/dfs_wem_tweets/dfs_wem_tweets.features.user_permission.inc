<?php
/**
 * @file
 * dfs_wem_tweets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dfs_wem_tweets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create wem_tweet content'.
  $permissions['create wem_tweet content'] = array(
    'name' => 'create wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any wem_tweet content'.
  $permissions['delete any wem_tweet content'] = array(
    'name' => 'delete any wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own wem_tweet content'.
  $permissions['delete own wem_tweet content'] = array(
    'name' => 'delete own wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any wem_tweet content'.
  $permissions['edit any wem_tweet content'] = array(
    'name' => 'edit any wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own wem_tweet content'.
  $permissions['edit own wem_tweet content'] = array(
    'name' => 'edit own wem_tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
