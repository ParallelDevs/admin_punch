<?php
$view = views_new_view();
$view->name = 'views_user_test';
$view->description = 'Testing views';
$view->base_table = 'user_punch_time';
$view->human_name = 'Vista de admin punch';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE;
$views[$view->name] = $view;
