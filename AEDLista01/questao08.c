#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada08(float *quilometro){
  printf("Este programa ir� converter uma velocidade em km/h para m/s!");
  printf("Informe a velocidade em km/h: ");
  scanf("%f", quilometro);
}

void processamento08(float *quilometro, float *metros){
  *metros = *quilometro / 3.6;
}

void saida08(float metros){
  printf("A velocidade convertida � igual a %.2fm/s\n",metros);
}

void questao08 (void){
  //Declara��o de vari�veis
  float km, ms;

  //Entrada
  entrada08(&km);

  //Processamento
  processamento08(&km,&ms);

  //Sa�da
  saida08(ms);
}
