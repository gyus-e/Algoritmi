#ifndef SELECTIONSORT_C_
#define SELECTIONSORT_C_

#include "Vector.c"

int Max (int * A, int i)
{
    int max = i;
    for (int j = i; j >= 0; j--)
    {
        if (A[j] > A[max])
        {
            max = j;
        }
    }
    return max;
}

void SelectionSort (int * A, int size)
{
	for (int i = size-1; i >= 0; i--)
    {
        int max = Max (A, i);
        Swap (A, i, max);
    }
}


#endif