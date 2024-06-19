#include "Vector.c"
#include "SelectionSort.c"
#include "InsertionSort.c"
#include "MergeSort.c"
#include "QuickSort.c"
#include "HeapSort.c"

#define SIZE 55

void TestSelectionSort()
{
    printf("Selection sort:\n");
    int A[SIZE];
    Init(A, SIZE);
    Print(A, SIZE);
    SelectionSort(A, SIZE);
    Print (A, SIZE);
} 

void TestInsertionSort()
{
    printf("Insertion sort:\n");
    int A[SIZE];
    Init(A, SIZE);
    Print(A, SIZE);
    InsertionSort(A, SIZE);
    Print (A, SIZE);
} 

void TestMergeSort()
{
    printf("Merge sort:\n");
    int A[SIZE];
    Init(A, SIZE);
    Print(A, SIZE);
    MergeSort(A, 0, SIZE-1);
    Print (A, SIZE);
} 

void TestQuickSort()
{
    printf("Quick sort:\n");
    int A[SIZE];
    Init(A, SIZE);
    Print(A, SIZE);
    QuickSort(A, 0, SIZE-1);
    Print (A, SIZE);
}

void TestHeapSort()
{
    printf("Heap sort:\n");
    int A[SIZE];
    Init(A, SIZE);
    Print(A, SIZE);
    HeapSort(A, SIZE);
    Print(A, SIZE);
}

void TestGennaio ()
{
    int A [12] = {7,6,8,5,1,9,8,0,2,4,3,1};
    int ret = Partiziona(A, 3, 8);
    Print(A, 12);
    printf("j = %d\n", ret);
}

void TestFebbraio ()
{
    int A [12] = {7,1,8,5,3,9,8,0,2,4,6,1};
    BuildHeap(A, 12);
    Print(A, 12);
}

int main ()
{
    TestSelectionSort();
    printf("\n");
    TestInsertionSort();
    printf("\n");
    TestMergeSort();
    printf("\n");
    TestQuickSort();
    printf("\n");
    TestHeapSort();
    printf("\n");
    // TestGennaio();
    // printf("\n");
    // TestFebbraio();
    // printf("\n");
    return 0;
}