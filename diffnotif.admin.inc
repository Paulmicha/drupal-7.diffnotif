<?php

/**
 * @file
 * Differences notification - admin pages
 */

/**
 * Settings form declaration
 */
function diffnotif_settings_form() {
  $form = array();
  
  $form['diffnotif_subscribers'] = array(
    '#title' => t("List of subscribers (user IDs)"),
    '#description' => t("You may enter several values by separating them with a comma : <code>,</code>"),
    '#type' => 'textfield',
    '#default_value' => variable_get('diffnotif_subscribers', ''),
  );
  
  $form['diffnotif_content_types'] = array(
    '#title' => t("List of content types (machine names)"),
    '#description' => t("You may enter several values by separating them with a comma : <code>,</code>"),
    '#type' => 'textfield',
    '#default_value' => variable_get('diffnotif_content_types', ''),
  );
  
  return system_settings_form($form);
}
