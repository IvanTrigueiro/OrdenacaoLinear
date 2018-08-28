#include "RadixSort.h"

RadixSort::RadixSort()
{
    //ctor
}

RadixSort::RadixSort(int arrA[], int tamanho)
{
    int i, maior, bucket[10], aux[10], exp=1;

    maior = getMaior(arrA, tamanho);

    //O valor 10 é simbolico pois os digitos vao de 0 a 9
    while(maior/exp > 0)
    {
        //Reseta o vetor auxiliar
        for(i=0; i<10; i++){
            aux[i] = 0;
        }

        //Salva a ocorrencia daquele digito
        for(i=0; i<tamanho; i++){
            aux[(arrA[i]/exp)%10]++;
        }

        //Auxiliar seta a posicao atual dos digitos
        for(i=1; i<tamanho; i++){
            aux[i] += aux[i-1];
        }

        //Constroi o bucket
        for(i=tamanho-1; i>=0; i--){
            bucket[ aux[(arrA[1]/exp)%10] -1] = arrA[i];
        }

        //Copia o resultado para arrA
        for(i=0; i<tamanho; i++){
            arrA[i] = bucket[i];
        }

        //aumenta exp, 10^x
        exp *= 10;
    }
}


int RadixSort::getMaior(int arrA[], int tamanho)
{
    int i, maior = arrA[0];
    for(i=1; i<tamanho; i++)
    {
        if(arrA[i] > maior)
            maior = arrA[i];
    }
    return maior;
}

RadixSort::~RadixSort()
{
    //dtor
}
