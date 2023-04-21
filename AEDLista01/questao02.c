#include<stdio.h>
#include<stdlib.h>
#include "questao02.h"

void entrada02(float *num1, float *num2, float *num3, float *num4){
    printf("Digite o 1o numero: ");
    scanf("%f", num1);
    printf("Digite o 2o numero: ");
    scanf("%f", num2);
    printf("Digite o 3o numero: ");
    scanf("%f", num3);
    printf("Digite o 4o numero: ");
    scanf("%f", num4);
}

void processamento02(float *num1, float *num2, float *num3, float *num4, float *saida){
    *saida = (*num1 + *num2 + *num3 + *num4) / 4.0;
}

void saida02(float saida){
    printf("\nA media e: %.1f\n", saida);
}

void questao02(void){
    //Declaração de variáveis
    float numero1, numero2, numero3, numero4, media;

    //Entrada dos dados
    entrada02(&numero1, &numero2, &numero3, &numero4);

    //Processamento dos dados
    processamento02(&numero1, &numero2, &numero3, &numero4, &media);

    //Saída dos dados
    saida02(media);
}
