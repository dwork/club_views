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

  $view = new view;
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
  $handler->display->display_options['title'] = 'Executive Board';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_chapter',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'uid' => 'uid',
    'field_retired' => 'field_retired',
    'field_chapter' => 'field_chapter',
    'field_employer' => 'field_employer',
    'field_first_name' => 'field_first_name',
    'field_middle_initial' => 'field_middle_initial',
    'field_last_name' => 'field_last_name',
    'field_suffix' => 'field_suffix',
    'field_officer' => 'field_officer',
    'field_classification' => 'field_classification',
    'nothing_2' => 'nothing_2',
    'field_contact_phone' => 'field_contact_phone',
    'mail' => 'mail',
    'field_website' => 'field_website',
    'nothing' => 'nothing',
    'field_work_address' => 'field_work_address',
    'nothing_1' => 'nothing_1',
    'edit_node' => 'edit_node',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_retired' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chapter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_employer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_initial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_officer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_classification' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['label'] = 'Add User (requires permission)';
  $handler->display->display_options['header']['php']['empty'] = FALSE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  if (user_access(\'Administer Users\')) {
     print "<BR>".\'<a href="admin/people/create">+ Add Member</a>\';
  }
?>';
  /* Header: Manage People (requires permissions) */
  $handler->display->display_options['header']['php_1']['id'] = 'php_1';
  $handler->display->display_options['header']['php_1']['table'] = 'views';
  $handler->display->display_options['header']['php_1']['field'] = 'php';
  $handler->display->display_options['header']['php_1']['ui_name'] = 'Manage People (requires permissions)';
  $handler->display->display_options['header']['php_1']['empty'] = FALSE;
  $handler->display->display_options['header']['php_1']['php_output'] = '<?php
  if (user_access(\'Administer Users\')) {
    print "<BR>"."<a href=\'/people\'>Manage People</a>";
  }
?>
';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 0;
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
  $handler->display->display_options['fields']['field_officer']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['text'] = '[field_officer]<BR>';
  $handler->display->display_options['fields']['field_officer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_officer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_officer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_officer']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_officer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_officer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_officer']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_officer']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_officer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_officer']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_officer']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_officer']['field_api_classes'] = 0;
  /* Field: Board Member (hidden) */
  $handler->display->display_options['fields']['field_board_member']['id'] = 'field_board_member';
  $handler->display->display_options['fields']['field_board_member']['table'] = 'field_data_field_board_member';
  $handler->display->display_options['fields']['field_board_member']['field'] = 'field_board_member';
  $handler->display->display_options['fields']['field_board_member']['ui_name'] = 'Board Member (hidden)';
  $handler->display->display_options['fields']['field_board_member']['label'] = '';
  $handler->display->display_options['fields']['field_board_member']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_board_member']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_board_member']['alter']['text'] = 'Board: [field_board_member]<BR>';
  $handler->display->display_options['fields']['field_board_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_board_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_board_member']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_board_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_board_member']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_board_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_board_member']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_board_member']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_board_member']['field_api_classes'] = 0;
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
  /* Field: Contact phone numbers (hidden) */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['ui_name'] = 'Contact phone numbers (hidden)';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['text'] = '[field_contact_phone]<BR>';
  $handler->display->display_options['fields']['field_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_contact_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['separator'] = '<BR>';
  $handler->display->display_options['fields']['field_contact_phone']['field_api_classes'] = 0;
  /* Field: Email Address (no link/hidden) */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email Address (no link/hidden)';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Website (hidden) */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['ui_name'] = 'Website (hidden)';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website: [field_website]';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Concatenate Member Name + Officer */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenate Member Name + Officer';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_2] -- [field_classification]<BR>
[field_officer]
[field_board_member] 
<BR>
[field_contact_phone]
<a href="mailto:[mail]">Contact via Email</a><BR>
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Work address (hidden) */
  $handler->display->display_options['fields']['field_work_address']['id'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['table'] = 'field_data_field_work_address';
  $handler->display->display_options['fields']['field_work_address']['field'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_work_address']['ui_name'] = 'Work address (hidden)';
  $handler->display->display_options['fields']['field_work_address']['label'] = '';
  $handler->display->display_options['fields']['field_work_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_work_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_work_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_work_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_work_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_work_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_work_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_work_address']['field_api_classes'] = 0;
  /* Field: Employer and Work Address */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Employer and Work Address';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Business';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_employer]<BR>
[field_work_address]<BR>
[field_website]';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: Edit Link (hidden) */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'Edit Link (hidden)';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Edit user (requires permission) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Edit user (requires permission)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  if (user_access(\'Administer Users\')) {
     print "<a href=\'/user/".$row->uid."/edit\'>Edit</a>";
  }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['sorts']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['sorts']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['sorts']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
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
  /* Filter criterion: Field: Status Inclusions (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'member_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['filters']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_chapter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator_id'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['label'] = 'Club/Chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['identifier'] = 'field_chapter_target_id';
  /* Filter criterion: Field: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name (or part)';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (or part)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['required'] = 0;
  /* Filter criterion: User: Board Member (field_board_member) */
  $handler->display->display_options['filters']['field_board_member_tid']['id'] = 'field_board_member_tid';
  $handler->display->display_options['filters']['field_board_member_tid']['table'] = 'field_data_field_board_member';
  $handler->display->display_options['filters']['field_board_member_tid']['field'] = 'field_board_member_tid';
  $handler->display->display_options['filters']['field_board_member_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_board_member_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_board_member_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_board_member_tid']['vocabulary'] = 'board';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Status Inclusions (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'member_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['filters']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_chapter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator_id'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['label'] = 'Club/Chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['identifier'] = 'field_chapter_target_id';
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
  $handler->display->display_options['filters']['field_classification_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_classification_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_classification_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_classification_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_classification_tid']['vocabulary'] = 'classification';
  $handler->display->display_options['filters']['field_classification_tid']['error_message'] = 0;
  /* Filter criterion: Field: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name (or part)';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (or part)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['required'] = 0;
  $handler->display->display_options['path'] = 'clubmembers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Officers */
  $handler = $view->new_display('page', 'Officers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Officers';
  $handler->display->display_options['display_description'] = 'Club Officers';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Status Inclusions (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'member_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['filters']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['filters']['field_chapter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_chapter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator_id'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['label'] = 'Club/Chapter';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['operator'] = 'field_chapter_target_id_op';
  $handler->display->display_options['filters']['field_chapter_target_id']['expose']['identifier'] = 'field_chapter_target_id';
  /* Filter criterion: Field: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name (or part)';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (or part)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['required'] = 0;
  /* Filter criterion: User: Officer (field_officer) */
  $handler->display->display_options['filters']['field_officer_tid']['id'] = 'field_officer_tid';
  $handler->display->display_options['filters']['field_officer_tid']['table'] = 'field_data_field_officer';
  $handler->display->display_options['filters']['field_officer_tid']['field'] = 'field_officer_tid';
  $handler->display->display_options['filters']['field_officer_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_officer_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_officer_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_officer_tid']['vocabulary'] = 'officers';
  $handler->display->display_options['path'] = 'clubofficers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Officers';
  $handler->display->display_options['menu']['description'] = 'Chapter/club officers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Board Members */
  $handler = $view->new_display('page', 'Board Members', 'page_2');
  $handler->display->display_options['display_description'] = 'List of Board Members';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 0;
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
  $handler->display->display_options['fields']['field_officer']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['text'] = '[field_chapter] : [field_officer]<BR>';
  $handler->display->display_options['fields']['field_officer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_officer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_officer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_officer']['empty'] = '[field_chapter]<BR>';
  $handler->display->display_options['fields']['field_officer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_officer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_officer']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_officer']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_officer']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_officer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_officer']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_officer']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_officer']['field_api_classes'] = 0;
  /* Field: Board Member (hidden) */
  $handler->display->display_options['fields']['field_board_member']['id'] = 'field_board_member';
  $handler->display->display_options['fields']['field_board_member']['table'] = 'field_data_field_board_member';
  $handler->display->display_options['fields']['field_board_member']['field'] = 'field_board_member';
  $handler->display->display_options['fields']['field_board_member']['ui_name'] = 'Board Member (hidden)';
  $handler->display->display_options['fields']['field_board_member']['label'] = '';
  $handler->display->display_options['fields']['field_board_member']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_board_member']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_board_member']['alter']['text'] = 'Board: [field_board_member]<BR>';
  $handler->display->display_options['fields']['field_board_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_board_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_board_member']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_board_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_board_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_board_member']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_board_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_board_member']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_board_member']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_board_member']['field_api_classes'] = 0;
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
  /* Field: Contact phone numbers (hidden) */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['ui_name'] = 'Contact phone numbers (hidden)';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['text'] = '[field_contact_phone]<BR>';
  $handler->display->display_options['fields']['field_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_contact_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['separator'] = '<BR>';
  $handler->display->display_options['fields']['field_contact_phone']['field_api_classes'] = 0;
  /* Field: Email Address (no link/hidden) */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email Address (no link/hidden)';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Website (hidden) */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['ui_name'] = 'Website (hidden)';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website: [field_website]';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Concatenate Member Name + Officer */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenate Member Name + Officer';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_2] -- [field_classification]<BR>
[field_officer]
[field_board_member] 
<BR>
[field_contact_phone]
<a href="mailto:[mail]">Contact via Email</a><BR>
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Work address (hidden) */
  $handler->display->display_options['fields']['field_work_address']['id'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['table'] = 'field_data_field_work_address';
  $handler->display->display_options['fields']['field_work_address']['field'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_work_address']['ui_name'] = 'Work address (hidden)';
  $handler->display->display_options['fields']['field_work_address']['label'] = '';
  $handler->display->display_options['fields']['field_work_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_work_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_work_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_work_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_work_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_work_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_work_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_work_address']['field_api_classes'] = 0;
  /* Field: Employer and Work Address */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Employer and Work Address';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Business';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_employer]<BR>
[field_work_address]<BR>
[field_website]';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: Edit Link (hidden) */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'Edit Link (hidden)';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Edit user (requires permission) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Edit user (requires permission)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  if (user_access(\'Administer Users\')) {
     print "<a href=\'/user/".$row->uid."/edit\'>Edit</a>";
  }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Status Inclusions (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'member_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name (or part)';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (or part)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['required'] = 0;
  /* Filter criterion: User: Board Member (field_board_member) */
  $handler->display->display_options['filters']['field_board_member_tid']['id'] = 'field_board_member_tid';
  $handler->display->display_options['filters']['field_board_member_tid']['table'] = 'field_data_field_board_member';
  $handler->display->display_options['filters']['field_board_member_tid']['field'] = 'field_board_member_tid';
  $handler->display->display_options['filters']['field_board_member_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_board_member_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_board_member_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_board_member_tid']['vocabulary'] = 'board';
  $handler->display->display_options['path'] = 'board';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Board';
  $handler->display->display_options['menu']['description'] = 'Board Members';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['club_members'] = $view;

  return $export;
}
