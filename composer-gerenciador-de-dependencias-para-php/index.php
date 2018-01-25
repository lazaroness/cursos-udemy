<?php
  require_once './vendor/autoload.php';

  use Monolog\Logger;
  use Monolog\Handler\StreamHandler;

  $log = new Logger('application');
  $log->pushHandler(new StreamHandler(__DIR__.'/logs/application.log', Logger::WARNING));

  $log->warning('Teste alerta sistema.');
  $log->error('Teste error sistema');

?>
