// 1. const
// 2. volatile
// 3. restrict
// 4. _Atomic

#include <stdio.h>

// #define MAX_SIZE 100h
const int MAX_SIZE = 100;
const float PI = 3.14;

const int y = 100;

void Test1()
{
    const int x = 10;
    // x = 10;

    printf("x: %d\n", x);

    int *ptr = (int*)&x;
    *ptr = 20;

    printf("x: %d\n", x);

    // Use a Global const
    printf("y: %d\n", y);
    int *p1 = (int*)&y;
    *p1 = 200;
    printf("y: %d\n", y);

}

volatile int x = 10;

void Test2()
{
    // operations
    printf("%d\n", x);
    x = 5;
    x = 15;
    x = 20;
    // operations
    printf("%d\n", x);
    // operations
    printf("%d\n", x);
    // operations
    printf("%d\n", x);
}

// RESTRICT START //////////////////////////////////////////////////////////////////////////////////
void AddArrays(int size, int* restrict a1, int* restrict a2, int* restrict rs)
{
    int i;

    int *p1 = a1; 
    for (i = 0; i < size; i++)
        rs[i] = p1[i] + a2[i];
}

void  Test3()
{
    int i;
    const int size = 5;

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int result[5];

    AddArrays(size, arr1, arr2, result);

    printf("Result --> ");
    for (i =0; i < size; i++)
        printf("%d ", result[i]);

    printf("\n");
}
// RESTRICT END /////////////////////////////////////////////////////////////////////////////////

int main()
{
    Test3();

    return 0;
}



