#ifndef HEAPSORT_C_
#define HEAPSORT_C_

#include "Vector.c"

void Heapify (int * A, int size, int i)
{
    if (A == NULL || i >= size)
    {
        return;
    }

    int sx = 2*i + 1;
    int dx = 2*i + 2;
    int max = i;

    if (sx < size && A[max] < A[sx])
    {
        max = sx;
    }
    if (dx < size && A[max] < A[dx])
    {
        max = dx;
    }
    if (max != i)
    {
        Swap (A, i, max);
        Heapify(A, size, max);
    }
}

void BuildHeap (int * A, int size)
{
    if (A == NULL)
    {
        return;
    }

    for (int i = (size-1)/2; i >= 0; i--)
    {
        Heapify(A, size, i);
    }
}

void HeapSort (int * A, int size)
{
    if (A == NULL)
    {
        return;
    }

    BuildHeap (A, size);
    for (int i = size-1; i >= 0; i--)
    {
        Swap (A, 0, i);
        Heapify(A, i-1, 0);
    }
}

#endif