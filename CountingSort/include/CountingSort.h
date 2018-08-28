#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H
#include <iostream>
using namespace std;

class CountingSort
{
    public:
        CountingSort();
        CountingSort(int arrA[], int arrB[], int tamanho, int maior);
        virtual ~CountingSort();

    private:
        int arrA[], arrB[], tamanho, maior;
};

#endif // COUNTINGSORT_H
