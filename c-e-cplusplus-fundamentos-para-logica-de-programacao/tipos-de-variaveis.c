#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int, float, char, boolean

void main(){
  // Definindo variaveis
  int a;
  float b;
  char c;
  bool d;

  // Definindo um valor na variavel
  a = 5;
  b = 2.3;
  c = 'a';
  d = true; // true = 1, false = 0

  // Escrevendo na tela
  printf("O valor de 'a' é: %d\n", a);
  printf("O valor de 'b' é: %f\n", b);
  printf("P valor de 'c' é: %c\n", c);
  printf("O valor de 'd' é: %d\n", d);

  // Pegando o que o usuario está digitando
  printf("Informe o novo valor de 'a': ");
  scanf("%d", &a);
  printf("O valor de 'a' é: %d\n", a);

  printf("Informe o novo valor de 'b': ");
  scanf("%f", &b);
  printf("O Valor de 'b' é: %f\n", b);

  // Controlando a quantidade de casas decimais do float
  // Exemplo com duas casas decimais
  printf("O valor de 'b' é: %.2f\n", b);

  printf("Informe o novo valor de 'c': ");
  scanf(" %c", &c);
  printf("O valor de 'c' é: %c\n", c);

  printf("Informe o novo valor de 'd': ");
  scanf("%d", &d);
  printf("O valode de 'd' é: %d\n", d);
}
