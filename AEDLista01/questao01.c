#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada01(int *num1, int *num2, int *num3){
    printf("Digite o 1o numero: ");
    scanf("%d", num1);
    printf("Digite o 2o numero: ");
    scanf("%d", num2);
    printf("Digite o 3o numero: ");
    scanf("%d", num3);
}

void processamento01(int *num1, int *num2, int *num3, int *saida){
    *saida = *num1 + *num2 + *num3;

}

void saida01(int saida){
    printf("\nA soma dos numeros e: %d\n", saida);
}

void questao01(void){
   //Declaração e inicialização
    int numero1, numero2, numero3, soma;

    //Entrada dos dados
    entrada01(&numero1, &numero2, &numero3);

    //Processamento dos dados
    processamento01(&numero1, &numero2, &numero3, &soma);

    //Saída dos dados
    saida01(soma);
}
