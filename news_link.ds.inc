<?php
/**
 * @file
 * news_link.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function news_link_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_link|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_link';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_news_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_news_link_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|news_link|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function news_link_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_link|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_news_link',
        2 => 'field_news_link_image',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_news_link' => 'ds_content',
      'field_news_link_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|news_link|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_link|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_link';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'postcard_left';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'field_news_link_image',
      ),
      'text' => array(
        1 => 'field_news_link',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_news_link_image' => 'image',
      'field_news_link' => 'text',
      'body' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_link|teaser'] = $ds_layout;

  return $export;
}
