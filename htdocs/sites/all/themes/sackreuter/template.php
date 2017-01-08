<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


/**
 * Pre-processes variables for the "page" theme hook.
 *
 * See template for list of available variables.
 *
 * @see page.tpl.php
 *
 * @ingroup theme_preprocess
 */
function sackreuter_preprocess_page(&$variables) {
  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12 no-padding"';
  }

  if (bootstrap_setting('fluid_container') == 1) {
    $variables['container_class'] = 'container-fluid';
  }
  else {
    $variables['container_class'] = '';
  }

  // Primary nav.
  $variables['primary_nav'] = FALSE;
  if ($variables['main_menu']) {
    // Build links.
    $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    // Provide default theme wrapper function.
    $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
  }

  // Secondary nav.
  $variables['secondary_nav'] = FALSE;
  if ($variables['secondary_menu']) {
    // Build links.
    $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
    // Provide default theme wrapper function.
    $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
  }

  $variables['navbar_classes_array'] = array('navbar');

  if (bootstrap_setting('navbar_position') !== '') {
    $variables['navbar_classes_array'][] = 'navbar-' . bootstrap_setting('navbar_position');
  }
  elseif (bootstrap_setting('fluid_container') == 1) {
    $variables['navbar_classes_array'][] = 'container-fluid';
  }
  if (bootstrap_setting('navbar_inverse')) {
    $variables['navbar_classes_array'][] = 'navbar-inverse';
  }
  else {
    $variables['navbar_classes_array'][] = 'navbar-default';
  }
}


function sackreuter_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if (drupal_is_front_page()) {
    $link_anchor = variable_get($variables['element']['#original_link']['mlid'] . '_anchor');
    if($link_anchor != null) {
      $output = '<a href="' . $link_anchor. '">' . $element['#title'] . '</a>';
      if (!empty($variables['element']['#below'])) {
        $class = 'dropdown expanded';
        unset($element['#below']['#theme_wrappers']);
        $sub_menu = '<ul class="dropdown-menu">' . drupal_render($variables['element']['#below']) . '</ul>';
      } else {
        $class = 'leaf';
      }
      $output = '<a href="' . $link_anchor . '" class="' . $class . '">' . $element['#title'] . '</a>';
      return '<li class="' . $class  . '">' . $output . $sub_menu . "</li>\n";
    } else {
      return sackreuter_print_normal_menu_link($variables);
    }


  } else {
    return sackreuter_print_normal_menu_link($variables);
  }
}

function sackreuter_print_normal_menu_link($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  $title = $element['#title'];
  $href = $element['#href'];
  $options = !empty($element['#localized_options']) ? $element['#localized_options'] : array();
  $attributes = !empty($element['#attributes']) ? $element['#attributes'] : array();

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';

      // Generate as standard dropdown.
      $title .= ' <span class="caret"></span>';
      $attributes['class'][] = 'dropdown';

      $options['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $options['attributes']['data-target'] = '#';
      $options['attributes']['class'][] = 'dropdown-toggle';
      $options['attributes']['data-toggle'] = 'dropdown';
    }
  }

  // Filter the title if the "html" is set, otherwise l() will automatically
  // sanitize using check_plain(), so no need to call that here.
  if (!empty($options['html'])) {
    $title = _bootstrap_filter_xss($title);
  }

  return '<li' . drupal_attributes($attributes) . '>' . l($title, $href, $options) . $sub_menu . "</li>\n";
}

/**
 * Implement theme_textarea
 */
function sackreuter_textarea($element) {
  $element['element']['#resizable'] = false ;
  return theme_textarea($element) ;
}