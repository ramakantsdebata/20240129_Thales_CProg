#include <stdio.h>
#include <stdlib.h>


typedef void (*NewFuncType)(int* arr, int size);
NewFuncType fn1;



typedef void (*PrinterFunc)(int*, int);

void Horizontal(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void Vertical(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d\n", arr[i]);
    printf("\n");
}

fn1 = Vertical;

void PrintArray(int* arr, int size, PrinterFunc pfn)
{
    printf("Array --> ");
    pfn(arr, size);
}

int main()
{
    int *arrMalloc = NULL, *arrCalloc = NULL;
    int size = 5;

    arrMalloc = (int*)malloc(size * sizeof(int));
    if (arrMalloc == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory allocated using malloc:\n");
    for (int i = 0 ; i < size; i++)
        arrMalloc[i] = i * 2;

    PrintArray(arrMalloc, size, Horizontal);


    arrCalloc = (int*)calloc(size, sizeof(int));
    if (arrCalloc == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory allocated using calloc:\n");
    fn1(arrCalloc, size);
    PrintArray(arrCalloc, size, Vertical);
    for (int i = 0 ; i < size; i++)
        arrCalloc[i] = i * 2;

    PrintArray(arrCalloc, size, Horizontal);
}
