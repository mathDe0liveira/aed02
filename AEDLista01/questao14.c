#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void entrada14(int *numero){
    printf("Este programa ira informar se um numero e par ou impar!\nInforme o numero: ");
    scanf("%d",numero);
}

void processamento14(int *numero, int *resto){
    if (*numero % 2 == 0){
        *resto = 0;
    }else{
        *resto = 1;
    }
}

void saida14(int numero, int resto){
    if (resto == 0){
        printf("O numero %d e par!\n",numero);
    }else{
        printf("O numero %d e impar!\n",numero);
    }
}

void questao14(void){
    //Declara��o de vari�veis
    int num, parimp;

    //Entrada de dados
    entrada14(&num);

    //Processamento dos dados
    processamento14(&num,&parimp);

    //Sa�da de dados
    saida14(num,parimp);
    system("pause");
}
