#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "BuscaOrdenadacao.h"
#include "BubbleSort.h"

/**
**
***            @autor                   Reidner sousa
****           @Version                 2
*****          @DataUltimaModificacao   14/01/2022 19:10
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


void bolha(int n, int*v)
{
    int ajudaai;
    int ajudaaimais1;
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i;++j){

            ajudaai=v[i];
            ajudaaimais1=v[i+1];
            printf("\nvalor de ajudaai %d\n",ajudaai);
            printf("valor de ajudaaimais1 %d\n",ajudaaimais1);
            printf("i =%d , j =%d \n",i,j);
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }

    }
}














int main()
{

    int i;
    int lop[10]={23,4,67,-8,21};
    for(i=0; i<5; i++){
        printf("%d\n",lop[i]);

    }
    printf("Ordenação \n");

   // bubbleSort(lop,5);


    int v[8]={25,86,48,92,57,12,33,37};
    printf("Outro vetor antes de ordena  \n");
    for(i=0; i<8; i++){
        printf("%d\n",v[i]);

    }
    bolha(8,v);
    printf("Outro vetor \n");
    for(i=0; i<8; i++){
        printf("%d\n",v[i]);

    }








}// fim da main


