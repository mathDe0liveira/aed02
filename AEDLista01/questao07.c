#include<stdio.h>
#include<stdlib.h>
#include "questao07.h"


void entrada07(float *raio){
  printf("Este programa ir� calcular as dimens�es do seu c�rculo e da esfera!\nInforme o comprimento do raio (em cm): ");
  scanf("%f",raio);
}

void processamento07(float *raio, float *diametro, float *circunferencia, float *area, float *volume){
  *diametro = *raio * 2;
  *area = 3.14 * *raio * *raio;
  *circunferencia = 2 * 3.14 * *raio;
  *volume = (4.0/3.0) * 3.14 * *raio * *raio * *raio;
}

void saida07(float diametro, float circunferencia, float area, float volume){
  printf("O seu c�rculo possui:\nDi�metro: %.2fcm\n�rea: %.2fcm2\n",diametro, area);
  printf("Circunfer�ncia: %.2fcm\n\nA sua esfera tem %.2fcm3 de volume\n", circunferencia, volume);
}

void questao07 (void){
  //Declara��o de vari�veis
  float r, diam, perimetro, vol, are;

  //Entrada dos dados
  entrada07 (&r);

  //Processamento
  processamento07(&r, &diam, &perimetro, &are, &vol);

  //Sa�da dos dados
  saida07(diam, perimetro, are, vol);
}
