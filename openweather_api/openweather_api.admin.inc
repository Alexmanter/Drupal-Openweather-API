<?php
/**
 * @file
 * Handles admin functionality for the module
 */

/**
 * Simple admin form for adding/removing weather locations.
 */
function openweather_api_admin_form($form, &$form_state) {

  $form['openweather_api_city_name'] = array(
    '#title' => t('City Name'),
    '#type' => 'textfield',
    '#description' => t('Default city name. For example: "Los Angeles"'),
	'#attributes' => array('size' => 85),
	'#required' => TRUE,
    '#default_value' => variable_get('openweather_api_city_name', 'Los Angeles'),
  );

  $form['openweather_api_country_code'] = array(
    '#title' => t('Country Code'),
    '#type' => 'textfield',
    '#description' => t('Default country code. For example: "us"'),
	'#attributes' => array('size' => 85),
	'#required' => TRUE,
    '#default_value' => variable_get('openweather_api_country_code', 'us')
  );

  $form['openweather_api_endpoint'] = array(
    '#title' => t('API Endpoint'),
    '#type' => 'textfield',
    '#description' => t('API endpoint.'),
	'#attributes' => array('size' => 85),
	'#required' => TRUE,
    '#default_value' => variable_get('openweather_api_endpoint', 'http://api.openweathermap.org/data/2.5/weather?q={$city},{$country_code}&appid={$key}&units=metric')
  );

  $form['openweather_api_key'] = array(
    '#title' => t('API Key'),
    '#type' => 'textfield',
    '#description' => t('API key.'),
	'#attributes' => array('size' => 85),
	'#required' => TRUE,
    '#default_value' => variable_get('openweather_api_key', ''),
  );

  return system_settings_form($form);
}
