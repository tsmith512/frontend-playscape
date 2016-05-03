<?php
/**
 * @file
 * fptd_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fptd_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-gallery-field_gallery_images'.
  $field_instances['node-gallery-field_gallery_images'] = array(
    'bundle' => 'gallery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => 'large',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
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
    'field_name' => 'field_gallery_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'gallery_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1200x1200',
      'min_resolution' => '400x400',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'dragndrop_upload_image',
      'settings' => array(
        'allow_replace' => 0,
        'droppable_area_text' => 'Drop files here to upload',
        'media_browser' => 0,
        'multiupload' => 1,
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
        'standard_upload' => 1,
        'upload_button_text' => 'Upload',
        'upload_event' => 'manual',
      ),
      'type' => 'dragndrop_upload_image',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');

  return $field_instances;
}
