#include "CountingSort.h"

CountingSort::CountingSort()
{
    //ctor
}

CountingSort::CountingSort(int arrA[], int arrB[], int tamanho, int maior)
{
    int aux[maior];
    for(int i=0; i<maior+1; i++)
    {
        //Inicializa o vetor auxiliar com zero;
        aux[i] = 0;
    }

    for(int j=1; j<=tamanho; j++)
    {
        /*Conta a ocorrencia de cada elemento X em arrA
        e incrementa na posicao X no auxiliar*/
        aux[arrA[j]]++;
    }
    for(int i=1; i<=maior; i++)
    {
        //Guarda a ultima ocorrencia do elemento i
        aux[i] = aux[i] + aux[i-1];
    }
    for(int j=tamanho; j>=1; j--)
    {
        //Coloca os elementos nos seus respectivos indices
        arrB[aux[arrA[j]]] = arrA[j];
        //Ajuda caso o elemento apareca mais de uma vez
        aux[arrA[j]] = aux[arrA[j]]-1;
    }
}

CountingSort::~CountingSort()
{
    //dtor
}
