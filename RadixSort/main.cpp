#include <iostream>
#include "RadixSort.h"
using namespace std;

int main()
{
    RadixSort teste;
    int tamanho;
    cout<<"Digite o tamanho do array: "<<endl;
    cin>>tamanho;

    int arr[tamanho];
    int maior = 0;
    cout<<"Digite os elementos do array: "<<endl;
	for(int i=1; i<=tamanho; i++)
	{
		cin>>arr[i-1];
		if(arr[i-1] > maior)
		{
			/*Procurando pelo maior valor dos
			elementos digitados pelo usuario*/
			maior = arr[i-1];
		}
	}
    RadixSort(arr, tamanho);
    teste.mostrar(arr, tamanho);
    return 0;
}
