<?php

/**
 * Implements callback_webform_options().
 *
 * Option list of the My Nodes content type nodes.
 */
function my_node_webform_options($component, $flat, $arguments) {
  return my_node_last_items_content();
}
