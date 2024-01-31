#include <stdio.h>

void Test1()
{
    int x = 10;

    int* p = &x;
    int** q = &p;

    printf("X -> Addr[%p], Data[%d]\n", &x, x);
    printf("P -> Addr[%p], Data[%p]\n", &p, p);
    printf("Q -> Addr[%p], Data[%p]\n", &q, q);
}

void Test2()
{
    int arr[10];

    // printf("%p\n", arr);
    // printf("%p\n", &arr);
    // printf("%p\n", &&arr);

    printf("%p, %p\n", arr, arr + 1);
    printf("%p, %p\n", &arr, &arr + 1);

}

void Test3()
{
    int arr[2][3];

    printf("%p\n", arr);
    printf("%p\n", &arr);
    printf("%p\n", *arr);
    printf("%d\n", **arr);

}

 int main()
 {
    // Test1();
    // Test2();
    Test3();

    return 0;
}