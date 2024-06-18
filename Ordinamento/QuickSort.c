#ifndef QUICKSORT_C_
#define QUICKSORT_C_

#include "Vector.c"

int Partiziona (int * A, int p, int r)
{
    int pivot = A[p];
    int i = p-1;
    int j = r+1;
    do {
        do {
            i++;
        } while (A[i] < pivot);

        do {
            j--;
        } while (A[j] > pivot);

        if (i < j){
            Swap (A, i, j);
        }
    } while (i < j);
    
    return j;
}

void QuickSort (int * A, int p, int r)
{
    if (A != NULL && p < r)
    {
        int q = Partiziona (A, p, r);
        QuickSort(A, p, q);
        QuickSort(A, q+1, r);
    }
}

#endif