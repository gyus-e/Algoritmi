#ifndef INSERTIONSORT_C_
#define INSERTIONSORT_C_

#include "Vector.c"

void InsertionSort (int * A, int size)
{
	for (int j = 1; j < size; j++)
    {
		int x = A[j];
		int i = j-1; 
        while (i >= 0 && x < A[i])
		{	
            A[i+1] = A[i];            
            i--;
        }
		A[i+1] = x;
    }
}

#endif 