<?php

  function dd($dump) {
    var_dump($dump);
    die();
  };

  function isBlank($info) {
    if(empty($info)):
      return 'sim';
    else:
      return 'nao';
    endif;
  };
