#ifndef VECTOR_C_
#define VECTOR_C_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Init (int * A, int size)
{
    srand(time(NULL));
    if (A != NULL){
        for (int i = 0; i < size; i++)
        {
            A[i] = rand() % 100;
        }
    }
}

void Swap (int * A, int i, int j)
{
    if (A != NULL)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

void Print (int * A, int size)
{
    if (A != NULL){
        for (int i = 0; i < size; i++)
        {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
}

#endif