// DANDO ERRO PARA ADICIONAR O CARACTERE DA OPERAÇÃO, MESMO COM A FUNÇÃO fflush(stdin)

//ANTES DAVA O ERRO POIS QUANDO SE TEM O SCANF PARA UM CHAR, MAS ANTES DELE TEM SCAN PARA UM NUMERO POR EXEMPLO, ELE CRIA UM LIXO NÃO SEI DAONDE E POR AUTOMATICO ADICIONA ESSE LIXO NO CHAR, E PARA LIMPAR O LIXO, USAMOS O fflush(stdin)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  float numero1, numero2, resultado;
  char operador;
  
  fflush(stdin);
  printf("Digite o primeiro numero: \n");
  scanf("%f", &numero1);

  fflush(stdin);
  printf("Digite o operador (+/-): \n");
  scanf("%c", &operador);

  fflush(stdin);
  printf("Digite o segundo numero: \n");
  scanf("%f", &numero2);


  if (operador == '+'){
    printf("O resultado da soma é: %.2f\n",resultado);
    resultado = numero1 + numero2;
  } 
  else if (operador == '-'){
    printf("O resultado da subtração é: %.2f\n",resultado);
  resultado = numero1 - numero2;
  }
  
  return 0;
}

