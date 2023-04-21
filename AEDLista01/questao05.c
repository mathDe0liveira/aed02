#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *sb,int *qtdep){
    printf("Digite o salario base: ");
    scanf("%f", sb);
    printf("Digite o numero de dependentes: ");
    scanf("%d", qtdep);
}
void processamento05(float *sb, float *sbr, int *qtdep){
    *sbr = *sb + (*qtdep * 32);
    *sbr = *sbr - (*sbr * 27.5)/100.0;
}
void saida05(float sbr){
    printf("\nO salario liquido e: %.2f\n", sbr);
}

void questao05(void){
    //Declaração de variáveis
    float sal, salBru;
    int dependentes;

    //Entrada de dados
    entrada05(&sal, &dependentes);

    //Processamento dos dados
    processamento05(&sal, &salBru, &dependentes);

    //Saída de dados
    saida05(salBru);
}
