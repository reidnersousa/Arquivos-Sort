#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "BuscaOrdenadacao.h"
#include "BubbleSort.h"

/**
**
***            @autor                   Reidner sousa
****           @Version                 1
*****          @DataUltimaModificacao   30/12/2021 12:11
****           @NomeCodigo              BubbleSort
*****          @TipoCodigo              Algoritmo de ordenação
***            @CoisasParaFazer         explicar como funcionar o algoritmo de bubble e  grava o video
**/

// int *V recebe um vetor
// int N e o tamanho do vetor

void imprimir(int  V[10] , int nn){
    int o;
    printf("Numeros antes da iteracao\n");
    for(o=0;o<nn; o++){
        printf("%d,",V[o]);
    }
    printf("\n");
}

void bubbleSort(int *V, int N){
    int i, continua, aux, fim =N;
    int ajudaai , ajudaaimais1;
    do{
        continua=0;
        for(i=0; i<fim-1; i++){
            ajudaai=V[i];
            ajudaaimais1=V[i+1];
            printf("\nvalor de ajudaai %d\n",ajudaai);
            printf("valor de ajudaaimais1 %d\n",ajudaaimais1);
            printf("iteracao %d\n",i);
            imprimir(V,N);
            if(V[i]>V[i+1]){
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
                continua=i;
                printf("continua %d\n",continua);
            }
        }
        fim--;
    }
    while(continua != 0);
    printf("\n continua %d",continua);
}


int main()
{

    int i;
    int lop[10]={23,4,67,-8,21};
    for(i=0; i<5; i++){
        printf("%d\n",lop[i]);

    }
    printf("Ordenação \n");

    bubbleSort(lop,5);

    printf("Teste\n");
    //imprimir(lop,5);









}// fim da main


