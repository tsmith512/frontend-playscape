<?php
/**
 * @file
 * fptd_advagg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fptd_advagg_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}