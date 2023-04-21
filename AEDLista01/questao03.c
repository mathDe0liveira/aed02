#include<stdio.h>
#include<stdlib.h>
#include "questao03.h"

void entrada03(float *n1, float *n2, int *p1, int *p2){
    printf("Digite a 1o nota: ");
    scanf("%f", n1);
    printf("Digite o peso da 1o nota: ");
    scanf("%d", p1);
    printf("Digite a 2o nota: ");
    scanf("%f", n2);
    printf("Digite o peso da 2o nota: ");
    scanf("%d", p2);
}

void processamento03(float *n1, float *n2, int *p1, int *p2, float *saida){
    *saida = (*n1 * *p1 + *n2 * *p2) / (*p1 + *p2);
}

void saida03(float saida){
    printf("\nA media e: %.1f\n", saida);
}

void questao03(void){
    //Declaração de variáveis
    float nota1, nota2, media;
    int peso1, peso2;
    entrada03(&nota1, &nota2, &peso1, &peso2);
    processamento03(&nota1, &nota2, &peso1, &peso2, &media);
    saida03(media);
}
