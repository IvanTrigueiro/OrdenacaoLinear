#include <iostream>
#include "CountingSort.h"
#include "RadixSort.h"
using namespace std;

int main()
{
    int tamanho, maior = 0;
	cout<<"Digite o tamanho do array: ";
	cin>>tamanho;

	/*arrA guarda os valores digitados pelo usuario */
	/*arrB guarda a sequencia ordenada(para o Counting)*/
	int arrA[tamanho], arrB[tamanho];

    cout<<"Digite os elementos do array: "<<endl;
	for(int i=1; i<=tamanho; i++)
	{
		cin>>arrA[i];
		if(arrA[i] > maior)
		{
			/*Procurando pelo maior valor dos
			elementos digitados pelo usuario*/
			maior = arrA[i];
		}
	}

	int digito;
	cout << "\nDigite 1 para CountingSort ou 2 para RadixSort: ";
    cin >> digito;

	switch(digito)
	{
        case 1:
            CountingSort(arrA, arrB, tamanho, maior);

            for(int i=1; i<=tamanho; i++)
            {
                cout<<arrB[i]<<" ";
            }
            cout<<endl;
            break;

        case 2:

            RadixSort(arrA, tamanho);
            for(int i=1; i<=tamanho; i++)
            {
                cout<<arrA[i]<<" ";
            }
            cout<<endl;
            break;

        default:
            cout << "Valor invalido" <<endl;
	}

	return 0;
}
