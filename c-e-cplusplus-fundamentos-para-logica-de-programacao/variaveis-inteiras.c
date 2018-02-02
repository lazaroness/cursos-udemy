#include <stdio.h>
#include <stdlib.h>

void main(){
  // o \n é utilizado para quebra de linha
  printf("variaveis inteiras\n");

  int a = 5;
  int b;
  // usando o %d para imprimir o valor da variavel inteira
  printf("%d\n", a);

  // Mudando o valor da variavel
  a = 15;

  // Concatenando valores
  printf("O valor da variavel 'a' é: %d\n", a);

  printf("Digite o valor de 'b': ");
  // lendo o que o usuario está digitando e jogando na variavel
  scanf("%d", &b);

  printf("O valor da variavel 'b' é: %d\n", b);
}
