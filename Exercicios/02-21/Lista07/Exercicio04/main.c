// Escreva um procedimento que receba um vetor de números reais ordenado e um número extra e insira esse
// número na sua posição correta no vetor ordenado, deslocando os outros números se necessário. Faça um
// pequeno programa para testar seu procedimento.

#include "stdio.h"
#include "stdlib.h"

void imprimir(float *v, int tam){
    printf("\n[");
    for(int i = 0; i < tam; i++)
        printf("%.2f, ", v[i]);
    printf("]\n");
}

void insertion_sort(float *v, int tam){
    int i, j, cont = 0;
    float aux;
    for(i = 1; i < tam; i++){
        aux = v[i];
        // if(j > 0)
        //     printf("%.2f\n", v[j-1]);
        for(j = i; (j > 0) && (aux < v[j-1]); j--)
            v[j] = v[j-1];
        v[j] = aux;
    }
}

float* insere_ordenado(float *v, int tam, float num){
    int new_tam = tam+1;
    float *new_vetor = (float*)malloc((new_tam)*sizeof(float));
    for(int i = 0; i < tam; i++)
        new_vetor[i] = v[i];
    new_vetor[tam] = num;
    // imprimir(new_v, tam+1);
    insertion_sort(new_vetor, tam+1);
    return new_vetor;
}

int main(){
    float *vetor = (float*)malloc(4*sizeof(float));
    for(int i = 0; i < 4; i++)
        vetor[i] = i + 1;
    imprimir(vetor, 4);
    vetor = insere_ordenado(vetor, 4, 2.5);
    imprimir(vetor, 5);
    return 0;
}