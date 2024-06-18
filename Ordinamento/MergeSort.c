#ifndef MERGESORT_C_
#define MERGESORT_C_

#include "Vector.c"

void Merge (int * A, int p, int q, int r)
{
    if (A == NULL)
    {
        return;
    }
    
    int * B = (int *) malloc (sizeof(int)*(r+1));
    int k = p;
    
    int i = p;
    int j = q+1;

    while (i <= q && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else 
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    int x = (i<=q) ? i : j;
    while (k <= r)
    {
        B[k] = A[x];
        x++;
        k++;
    }

    for (int t = p; t <= r; t++)
    {
        A[t] = B[t];
    }
    free (B);
}

void MergeSort (int * A, int p, int r)
{
    if (A != NULL && p < r)
    {
        int q = (p+r)/2;
        MergeSort(A, p, q);
        MergeSort(A, q+1, r);
        Merge (A, p, q, r);
    }
}

#endif