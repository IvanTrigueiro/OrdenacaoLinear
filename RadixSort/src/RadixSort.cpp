#include "RadixSort.h"

RadixSort::RadixSort()
{
    //ctor
}

RadixSort::RadixSort(int arr[], int tamanho)
{
    // Encontra o maior valor
    int maior = getMaior(arr, tamanho);

    // Faz counting sort para cada digito. Em vez de passar
    // o digito do numero, exp é passado. exp é 10^i
    // onde i é o numero do digito atual
    for (int exp = 1; maior/exp > 0; exp *= 10)
        countSort(arr, tamanho, exp);
}

void RadixSort::countSort(int arr[], int tamanho, int exp)
{
    int saida[tamanho];
    int i, count[10] = {0};

    for (i = 0; i < tamanho; i++){
        count[ (arr[i]/exp)%10 ]++;
    }

    for (i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }

    for (i = tamanho - 1; i >= 0; i--)
    {
        saida[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < tamanho; i++){
        arr[i] = saida[i];
    }
}

int RadixSort::getMaior(int arr[], int tamanho)
{
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++)
        if (arr[i] > maior)
            maior = arr[i];
    return maior;
}

void RadixSort::mostrar(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        cout << arr[i] << " ";
}


RadixSort::~RadixSort()
{
    //dtor
}
