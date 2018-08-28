#ifndef RADIXSORT_H
#define RADIXSORT_H
#include <iostream>
using namespace std;

class RadixSort
{
    public:
        RadixSort();
        RadixSort(int arrA[], int tamanho);
        int getMaior(int arrA[], int tamanho);
        virtual ~RadixSort();
    private:
        int arrA[], tamanho;
};

#endif // RADIXSORT_H
