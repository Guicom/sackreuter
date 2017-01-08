<?php
/**
 * @file
 * sac_ct_rv.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function sac_ct_rv_default_rules_configuration() {
  $items = array();
  $items['rules_rendez_vous'] = entity_import('rules_config', '{ "rules_rendez_vous" : {
      "LABEL" : "Rendez-vous",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--rendez_vous" : { "bundle" : "rendez_vous" } },
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Nouvelle demande de rendez-vous",
            "message" : "Date\\r\\n[node:field-rv-date]\\r\\n[node:field_rv_time]\\r\\n\\r\\nCoordonn\\u00e9es\\r\\nNom : [node:field_rv_nom]\\r\\nPr\\u00e9nom : [node:field_rv_prenom]\\r\\nAdresse : [node:field_rv_adresse] [node:field_rv_cp] [node:field_rv_ville]\\r\\nMail : [node:field_rv_mail]\\r\\nT\\u00e9l\\u00e9phone : [node:field_rv_phone]\\r\\n\\r\\nV\\u00e9hicule : [node:field_rv_vehicule] [node:field_rv_year]\\r\\nType de prestation voulue : [node:field_rv_prestation]\\r\\n\\r\\nRemarque :\\r\\n[node:field_rv_remarque]\\r\\n",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "[node:field-rv-email]",
            "subject" : "Votre demande de rendez-vous au Garage Sackreuter",
            "message" : "Votre demande de rendez-vous pour le [node:field-rv-date] [node:field_rv_time] a bien \\u00e9t\\u00e9 prise en compte.\\r\\n\\r\\nVos coordonn\\u00e9es\\r\\nNom : [node:field_rv_nom]\\r\\nPr\\u00e9nom : [node:field_rv_prenom]\\r\\nAdresse : [node:field_rv_adresse] [node:field_rv_cp] [node:field_rv_ville]\\r\\n\\r\\nV\\u00e9hicule : [node:field_rv_vehicule] [node:field_rv_year]\\r\\nType de prestation voulue : [node:field_rv_prestation]\\r\\n\\r\\nRemarque :\\r\\n[node:field_rv_remarque]\\r\\n\\r\\nCordialement,\\r\\nGarage Sackreuter",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        },
        { "redirect" : { "url" : "[site:url]" } }
      ]
    }
  }');
  return $items;
}
