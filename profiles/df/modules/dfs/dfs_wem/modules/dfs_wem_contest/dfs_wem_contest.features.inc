<?php
/**
 * @file
 * dfs_wem_contest.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfs_wem_contest_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dfs_wem_contest_node_info() {
  $items = array(
    'wem_contest' => array(
      'name' => t('WEM Contest'),
      'base' => 'node_content',
      'description' => t('A <em>Contest</em> that authenticated users can enter by joining the Organic Group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
