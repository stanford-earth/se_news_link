<?php
/**
 * @file
 * news_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_link_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function news_link_node_info() {
  $items = array(
    'news_link' => array(
      'name' => t('News: Link'),
      'base' => 'node_content',
      'description' => t('A link to a news article hosted on another website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
