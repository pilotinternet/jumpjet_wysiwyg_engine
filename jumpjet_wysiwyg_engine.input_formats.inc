<?php

/**
 * Implementation of hook_input_formats().
 */
function jumpjet_wysiwyg_engine_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'WYSIWYG';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Filter HTML tags
      'filter_html' => '1',
      // Allowed HTML tags
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <blockquote> <br> <p> <h3> <h4> <h5> <h6> <img> <hr> <table> <tr> <th> <td>',
      // Display HTML help
      'filter_html_help' => 1,
      // Spam link deterrent
      'filter_html_nofollow' => 0,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: HTML filter
      '0' => '10',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
  );
  $input_format->machine = 'wysiwyg';
  $input_formats['wysiwyg'] = $input_format;

  return $input_formats;

}
