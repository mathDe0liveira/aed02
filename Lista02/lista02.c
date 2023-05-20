#include <stdio.h>

void bubble(int array[], int tamanho) {
    int i, aux, contador;

    for(contador = 1; contador < tamanho; contador++) {
        for(i = 0; i < tamanho - 1; i++) {
            if(array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
        }
    }
}

void insert(int array[], int tamanho){
    for(int i = 1; i < tamanho; i++){
        int aux = array[i];
        int j = i;
        while ((j > 0) && (aux < array[j - 1])){
            array[j] = array[j - 1];
            j--;
        }
        array[j] = aux;
    }
}

void select(int array[], int tamanho) {
  int i, j, min, aux;
  for (i = 0; i < tamanho - 1; i++)
  {
     min = i;
     for (j = (i + 1); j < tamanho; j++) {
       if(array[j] < array[min])
         min = j;
     }
     if (i != min) {
       aux = array[i];
       array[i] = array[min];
       array[min] = aux;
     }
  }
}

int main() {

    int array[5], i, op;

    printf("Digite cinco numeros para preencher o vetor. \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nOrdem atual dos itens do vetor: \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nSelecione o metodo de ordenacao: \n1 - Bubble sort \n2 - Insert sort \n3 - Select sort \nResposta: ");
    scanf("%d", &op);

    switch(op){
    case 1:
        bubble(array, 5);
        break;

    case 2:
        insert(array, 5);
        break;

    case 3:
        select(array, 5);
        break;

    default:
        printf("Opcao invalida.");
        break;
    }

    printf("\n\nElementos do vetor ordenados: \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
