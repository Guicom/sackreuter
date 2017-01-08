<?php
/**
 * @file
 * sac_bk_home_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sac_bk_home_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_blog'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_blog',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:10:"blog-texte";}}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'blog',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Blog',
    'visibility' => 1,
  );

  $export['block-block_contact_carte'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_contact_carte',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:0:{}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'contact',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-block_contact_texte'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_contact_texte',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:0:{}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'contact',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact',
    'visibility' => 1,
  );

  $export['block-block_equipe'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_equipe',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:7:"equipes";}}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'equipe',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Une équipe d\'expert qui travail avec passion',
    'visibility' => 1,
  );

  $export['block-block_vente'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block_vente',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:6:"ventes";}}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'vente',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Nos Véhicules',
    'visibility' => 1,
  );

  $export['sac_rv-rendez_vous'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'rendez_vous',
    'module' => 'sac_rv',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:11:"rendez-vous";}}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'rendez_vous',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blog-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog-block',
    'module' => 'views',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:4:"blog";}}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'blog',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-home_services-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'home_services-block',
    'module' => 'views',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:8:"services";}}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -9,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'service',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-offre_home-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'offre_home-block',
    'module' => 'views',
    'node_types' => array(),
    'options' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sackreuter' => array(
        'region' => 'vente',
        'status' => 1,
        'theme' => 'sackreuter',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
