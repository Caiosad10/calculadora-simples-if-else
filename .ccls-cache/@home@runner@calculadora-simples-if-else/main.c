#include <stdio.h>
#include <stdlib.h>

int main(){
  float numero1, numero2, resultado;
  char operador;
  
  fflush(stdin);
  printf("Digite o primeiro numero: \n");
  scanf("%f", &numero1);

  fflush(stdin);
  printf("Digite o operador (+/-): \n");
  scanf(" %c", &operador);

  while (operador != '+' && operador != '-'){
    fflush(stdin);
    printf("Operador inválido, digite novamente o operador(): \n");
    scanf(" %c", &operador);
    break;
  }
  fflush(stdin);
  printf("Digite o segundo numero: \n");
  scanf("%f", &numero2);

  if (operador == '+') {
    resultado = numero1 + numero2;
    printf("O resultado da soma é: %.2f\n",resultado);
  }
  else if (operador == '-'){
    resultado = numero1 - numero2;
    printf("O resultado da subtração é: %.2f\n",resultado);      ;
    }
  
  return 0;
}

