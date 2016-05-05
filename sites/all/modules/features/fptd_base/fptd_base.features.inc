<?php
/**
 * @file
 * fptd_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fptd_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fptd_base_image_default_styles() {
  $styles = array();

  // Exported image style: fptd_image_gallery_full.
  $styles['fptd_image_gallery_full'] = array(
    'label' => 'Image Gallery Full',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => 960,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fptd_base_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
