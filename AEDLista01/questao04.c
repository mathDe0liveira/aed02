#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada04(float *sal, float *porc){
    printf("Digite o salario inicial: ");
    scanf("%f", sal);
    printf("Digite a porcentagem de aumento: ");
    scanf("%f", porc);
}

void processamento04(float *sal, float *porc, float *novo){
    *novo = *sal + (*sal * *porc / 100.0);
}

void saida04(float novo){
    printf("O novo salario e: %.2f\n", novo);
}

void questao04(void){
    //Declaração de variáveis
    float salAnt, salNovo, porcentagem;

    //Entrada dos dados
    entrada04(&salAnt, &porcentagem);

    //Processamento dos dados
    processamento04(&salAnt, &porcentagem ,&salNovo);

    //Saída dos dados
    saida04(salNovo);
}
