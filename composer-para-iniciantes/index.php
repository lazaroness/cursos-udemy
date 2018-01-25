<?php
  require 'vendor/autoload.php';

  $dado = "";
  echo isBlank($dado);

  $dado = "dado";
  echo isBlank($dado);

  $email = new app\classes\Email;
  echo dd($email->send());
