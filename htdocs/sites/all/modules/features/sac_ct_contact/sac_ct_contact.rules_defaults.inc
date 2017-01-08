<?php
/**
 * @file
 * sac_ct_contact.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function sac_ct_contact_default_rules_configuration() {
  $items = array();
  $items['sac_ct_rv_contact'] = entity_import('rules_config', '{ "sac_ct_rv_contact" : {
      "LABEL" : "COntact",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--contact" : { "bundle" : "contact" } },
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Contact",
            "message" : "Nouveau contact : \\r\\nObjet : [node:field-objet]\\r\\nMail : [node:field-mail]\\r\\nRemarque :\\r\\n[node:field-remarque]\\r\\n\\r\\n",
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
