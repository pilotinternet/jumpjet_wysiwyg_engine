<?php

/**
 * Implementation of hook_default_wysiwyg().
 */
function jumpjet_wysiwyg_engine_default_wysiwyg() {
  $export = array();
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'ckeditor';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 1,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'JustifyLeft' => 1,
        'JustifyCenter' => 1,
        'JustifyRight' => 1,
        'BulletedList' => 1,
        'NumberedList' => 1,
        'Outdent' => 1,
        'Indent' => 1,
        'Undo' => 1,
        'Link' => 1,
        'Unlink' => 1,
        'Anchor' => 1,
        'Blockquote' => 1,
        'HorizontalRule' => 1,
        'Copy' => 1,
        'Paste' => 1,
        'PasteText' => 1,
        'RemoveFormat' => 1,
        'SpecialChar' => 1,
        'Format' => 1,
        'SpellChecker' => 1,
        'Scayt' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 0,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,h2,h3,h4,h5,h6,blockquote,code,pre,dt,dd',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'wysiwyg';

  $export['wysiwyg'] = $wysiwyg;
  return $export;
}
