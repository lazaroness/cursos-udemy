#include <stdio.h>
#include <stdlib.h>

void main(){ // void indica que a função não precisa de retorno
  // Definindo variaveis
  int a = 6, b = 3;

  // Soma
  printf("A soma de %d e %d é: %d\n", a, b, a + b);

  // Subtração
  printf("A subtração de %d e %d é: %d\n", a, b, a - b);

  // Divisão
  printf("A divisão de %d e %d é: %d\n", a, b, a / b);

  // Multiplicação
  printf("A multiplicação de %d e %d é: %d\n", a, b, a * b);

  // Resto da divisão
  printf("O resto da divisão entre %d e %d é: %d\n", a, b, a % b);

  // Valor absoluto
  printf("O valor absoluto de -3 é: %d\n", abs(-3));
}
