#include<stdio.h>
#include<stdlib.h>
#include"questao06.h"

void entrada06(float *preco1, float *preco2){
    printf("Digite o valor antigo do produto: ");
    scanf("%f", preco1);
    printf("Digite o valor novo: ");
    scanf("%f", preco2);
}

void processamento06(float *preco1, float *preco2, float *saida){
    *saida = ((*preco2 - *preco1) / *preco1) * 100.0;
}

void saida06(float saida){
    printf("O aumento do produto foi: %.2f%%\n", saida);
}

void questao06(void){
    //Declaração das variáveis
    float precoAnt, precoNovo, aumento;

    //Entrada dos dados
    entrada06(&precoAnt, &precoNovo);

    //Processamento dos dados
    processamento06(&precoAnt, &precoNovo, &aumento);

    //Saída dos dados
    saida06(aumento);
}
