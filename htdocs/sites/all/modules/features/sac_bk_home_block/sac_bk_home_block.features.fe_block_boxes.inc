<?php
/**
 * @file
 * sac_bk_home_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function sac_bk_home_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog bloc';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block_blog';
  $fe_block_boxes->body = '<p>Venez découvrir les articles de notre blog</p>

<p><a href="/blog">Voir les articles</a></p>
';

  $export['block_blog'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bloc carte contact';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_contact_carte';
  $fe_block_boxes->body = '<p><iframe align="right" frameborder="0" height="450" scrolling="no" src="https://www.google.com/maps/embed?pb=!1m14!1m8!1m3!1d10565.432160521945!2d7.545043!3d48.5455332!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x0%3A0xa28cd8e2f1d4d4b7!2sGarage+Sackreuter!5e0!3m2!1sfr!2sfr!4v1483290769039" style="border:0" width="1000"></iframe></p>
';

  $export['block_contact_carte'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block contact text';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block_contact_texte';
  $fe_block_boxes->body = '<p>Garage SACKREUTER</p>

<p>Rue des Vanneaux</p>

<p>67120 DACHSTEIN</p>

<p>03 88 38 89 28</p>

<p><a href="/contact">Ecrivez-nous</a></p>
';

  $export['block_contact_texte'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block équipe';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block_equipe';
  $fe_block_boxes->body = '<p><a href="/lequipe">En savoir plus</a></p>
';

  $export['block_equipe'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bloc ventes';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block_vente';
  $fe_block_boxes->body = '<p>Venez découvrir nos véhicules</p>

<p><a href="/ventes">En savoir plus</a></p>
';

  $export['block_vente'] = $fe_block_boxes;

  return $export;
}
