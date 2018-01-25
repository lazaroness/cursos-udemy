<?php

  namespace app\classes;

  class Email extends \PHPMailer\PHPMailer\PHPMailer {

    public function send(){
      return 'Enviar E-mail';
    }

  }
