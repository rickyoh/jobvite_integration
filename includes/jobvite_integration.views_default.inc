<?php

function jobvite_integration_views_default_views() {
	$xmlFeed = variable_get('jobvite_xml_feed');
	if($xmlFeed){
	$view = new view();
	$view->name = 'jobvite_job_listing';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'xml';
	$view->human_name = 'Job Listing';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Careers';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'none';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['query']['options']['xml_file'] = $xmlFeed;
	$handler->display->display_options['query']['options']['row_xpath'] = '/result/job';
	$handler->display->display_options['query']['options']['show_errors'] = 1;
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '20';
	$handler->display->display_options['style_plugin'] = 'default';
	$handler->display->display_options['row_plugin'] = 'fields';
	/* Field: title: Text */
	$handler->display->display_options['fields']['text_1']['id'] = 'text_1';
	$handler->display->display_options['fields']['text_1']['table'] = 'xml';
	$handler->display->display_options['fields']['text_1']['field'] = 'text';
	$handler->display->display_options['fields']['text_1']['label'] = '';
	$handler->display->display_options['fields']['text_1']['exclude'] = TRUE;
	$handler->display->display_options['fields']['text_1']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['text_1']['xpath_selector'] = 'title';
	$handler->display->display_options['fields']['text_1']['multiple'] = 0;
	/* Field: id: Text */
	$handler->display->display_options['fields']['text_3']['id'] = 'text_3';
	$handler->display->display_options['fields']['text_3']['table'] = 'xml';
	$handler->display->display_options['fields']['text_3']['field'] = 'text';
	$handler->display->display_options['fields']['text_3']['label'] = '';
	$handler->display->display_options['fields']['text_3']['exclude'] = TRUE;
	$handler->display->display_options['fields']['text_3']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['text_3']['xpath_selector'] = 'id';
	$handler->display->display_options['fields']['text_3']['multiple'] = 0;
	/* Field: Global: Custom text */
	$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['table'] = 'views';
	$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['label'] = '';
	$handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4><a href="/careers/[text_3]">[text_1]</a></h4>';
	$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
	/* Field: location: Text */
	$handler->display->display_options['fields']['text']['id'] = 'text';
	$handler->display->display_options['fields']['text']['table'] = 'xml';
	$handler->display->display_options['fields']['text']['field'] = 'text';
	$handler->display->display_options['fields']['text']['label'] = 'Location';
	$handler->display->display_options['fields']['text']['xpath_selector'] = 'location';
	$handler->display->display_options['fields']['text']['multiple'] = 0;
	/* Field: category: Text */
	$handler->display->display_options['fields']['text_2']['id'] = 'text_2';
	$handler->display->display_options['fields']['text_2']['table'] = 'xml';
	$handler->display->display_options['fields']['text_2']['field'] = 'text';
	$handler->display->display_options['fields']['text_2']['label'] = 'Category';
	$handler->display->display_options['fields']['text_2']['xpath_selector'] = 'category';
	$handler->display->display_options['fields']['text_2']['multiple'] = 0;
	/* Field: apply-url: Markup */
	$handler->display->display_options['fields']['markup']['id'] = 'markup';
	$handler->display->display_options['fields']['markup']['table'] = 'xml';
	$handler->display->display_options['fields']['markup']['field'] = 'markup';
	$handler->display->display_options['fields']['markup']['label'] = '';
	$handler->display->display_options['fields']['markup']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['markup']['xpath_selector'] = 'apply-url';
	$handler->display->display_options['fields']['markup']['multiple'] = 0;
	$handler->display->display_options['fields']['markup']['format'] = '1';
	/* Field: Global: Custom text */
	$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
	$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
	$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
	$handler->display->display_options['fields']['nothing_1']['label'] = '';
	$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/careers/[text_3]">view details</a>';
	$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
	/* Filter criterion: category: Text */
	$handler->display->display_options['filters']['text']['id'] = 'text';
	$handler->display->display_options['filters']['text']['table'] = 'xml';
	$handler->display->display_options['filters']['text']['field'] = 'text';
	$handler->display->display_options['filters']['text']['exposed'] = TRUE;
	$handler->display->display_options['filters']['text']['expose']['operator_id'] = 'text_op';
	$handler->display->display_options['filters']['text']['expose']['label'] = 'Text';
	$handler->display->display_options['filters']['text']['expose']['operator'] = 'text_op';
	$handler->display->display_options['filters']['text']['expose']['identifier'] = 'text';
	$handler->display->display_options['filters']['text']['is_grouped'] = TRUE;
	$handler->display->display_options['filters']['text']['group_info']['label'] = 'SEARCH FOR JOBS';
	$handler->display->display_options['filters']['text']['group_info']['identifier'] = 'category';
	$handler->display->display_options['filters']['text']['group_info']['group_items'] = array();
	$handler->display->display_options['filters']['text']['xpath_selector'] = 'category';

	/* Display: Page */
	$handler = $view->new_display('page', 'Page', 'page');
	$handler->display->display_options['path'] = 'company/careers';
	$translatables['careers'] = array(
	  t('Master'),
	  t('Careers'),
	  t('more'),
	  t('Apply'),
	  t('Reset'),
	  t('Sort by'),
	  t('Asc'),
	  t('Desc'),
	  t('Items per page'),
	  t('- All -'),
	  t('Offset'),
	  t('« first'),
	  t('‹ previous'),
	  t('next ›'),
	  t('last »'),
	  t('<h4><a href="/careers/[text_3]">[text_1]</a></h4>'),
	  t('Location'),
	  t('Category'),
	  t('<a href="/careers/[text_3]">view details</a>'),
	  t('Text'),
	  t('SEARCH FOR JOBS'),
	  t('Page'),
	);
	
	
	
	$views[$view->name] = $view;
    return $views;
	}
}