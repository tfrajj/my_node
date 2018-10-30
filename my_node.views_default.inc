<?php

/**
 * Implements hook_views_default_views().
 */
function my_node_views_default_views() {
  // Finds all views files by mask in the views directory.
  $files = file_scan_directory(drupal_get_path('module', 'my_node'). '/views', '/.view/');

  $views = [];
  foreach ($files as $file_path => $file) {
    // Include exported view file.
    require $file_path;

    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }

  return $views;
}
