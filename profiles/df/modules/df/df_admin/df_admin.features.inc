<?php
/**
 * @file
 * df_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function df_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
