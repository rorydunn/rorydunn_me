<?php
/**
 * @file
 * about_me_component.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_me_component_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function about_me_component_node_info() {
  $items = array(
    'resume' => array(
      'name' => t('Resume'),
      'base' => 'node_content',
      'description' => t('Resume '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
