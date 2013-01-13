<?php
/**
 * @file
 * club_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'club_members';
  $view->description = 'Public view of Members';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Club Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User UID (hidden) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'User UID (hidden)';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: Retired */
  $handler->display->display_options['fields']['field_retired']['id'] = 'field_retired';
  $handler->display->display_options['fields']['field_retired']['table'] = 'field_data_field_retired';
  $handler->display->display_options['fields']['field_retired']['field'] = 'field_retired';
  $handler->display->display_options['fields']['field_retired']['exclude'] = TRUE;
  /* Field: Club/Chapter (hidden) */
  $handler->display->display_options['fields']['field_chapter']['id'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['fields']['field_chapter']['field'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['ui_name'] = 'Club/Chapter (hidden)';
  $handler->display->display_options['fields']['field_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_chapter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Retired?';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '         if (isset($data->field_field_retired[0][\'raw\'][\'safe_value\'])) {
            $retired = $data->field_field_retired[0][\'raw\'][\'value\'];
            if ($retired) {
               return " (retired)";
            }
         }';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Employer */
  $handler->display->display_options['fields']['field_employer']['id'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['table'] = 'field_data_field_employer';
  $handler->display->display_options['fields']['field_employer']['field'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employer']['type'] = 'text_plain';
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  /* Field: Officer (hidden) */
  $handler->display->display_options['fields']['field_officer']['id'] = 'field_officer';
  $handler->display->display_options['fields']['field_officer']['table'] = 'field_data_field_officer';
  $handler->display->display_options['fields']['field_officer']['field'] = 'field_officer';
  $handler->display->display_options['fields']['field_officer']['ui_name'] = 'Officer (hidden)';
  $handler->display->display_options['fields']['field_officer']['label'] = '';
  $handler->display->display_options['fields']['field_officer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_officer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_officer']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_officer']['delta_offset'] = '0';
  /* Field: Classification (hidden) */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['ui_name'] = 'Classification (hidden)';
  $handler->display->display_options['fields']['field_classification']['label'] = '';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_classification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Concatenated member name (hidden) */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Concatenated member name (hidden)';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix] ';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Concatenate Member Name + Officer */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenate Member Name + Officer';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_2]<BR>
[field_chapter] <BR>
[field_officer]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]';
  /* Field: Concatenate Classification + Employer */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Concatenate Classification + Employer';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Classification/Employer';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_classification]<BR>[field_employer] [php]';
  /* Field: Field: Contact Info */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['separator'] = '<BR>';
  /* Sort criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Member Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    35 => '35',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'member_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Club/Chapter (field_chapter) */
  $handler->display->display_options['filters']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_chapter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator_id'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['label'] = 'Club/Chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['identifier'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Field: Classification (field_classification) */
  $handler->display->display_options['filters']['field_classification_tid']['id'] = 'field_classification_tid';
  $handler->display->display_options['filters']['field_classification_tid']['table'] = 'field_data_field_classification';
  $handler->display->display_options['filters']['field_classification_tid']['field'] = 'field_classification_tid';
  $handler->display->display_options['filters']['field_classification_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_classification_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_classification_tid']['expose']['operator_id'] = 'field_classification_tid_op';
  $handler->display->display_options['filters']['field_classification_tid']['expose']['label'] = 'Classification';
  $handler->display->display_options['filters']['field_classification_tid']['expose']['operator'] = 'field_classification_tid_op';
  $handler->display->display_options['filters']['field_classification_tid']['expose']['identifier'] = 'field_classification_tid';
  $handler->display->display_options['filters']['field_classification_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_classification_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_classification_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_classification_tid']['vocabulary'] = 'classification';
  $handler->display->display_options['filters']['field_classification_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (partial)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'clubmembers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['club_members'] = $view;

  return $export;
}
