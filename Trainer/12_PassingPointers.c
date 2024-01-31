#include <stdio.h>


void Func1(int a)
{
    printf("Func1: %d\n", a);
}

void Func2(int *a)
{
    printf("Func2: %d\n", *a);
}

void Func3(int list[], int size)
{
    int i;

    printf("List -->");
    for (i = 0; i < size; i++)
        printf("%d ", list[i]);
    printf("\n");
}

void Func4(int *list, int size)
{
    int i;

    printf("List -->");
    for (i = 0; i < size; i++)
        printf("%d ", list[i]);
    printf("\n");
}

void Func5(int list[][3], int row, int col)
{
    int i, j;

    printf("List -->");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            printf("%d ", list[i][j]);
    printf("\n");
}
void Func6(int (*list)[3], int row, int col)
{
    int i, j;

    printf("List -->");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            // printf("%d ", list[i][j]);
            printf("%d ", *(*(list + i) + j));
    printf("\n");
}

int main()
{
    int x = 10;

    Func1(x);
    Func2(&x);

    int arr1[5] = {1, 2, 3, 4, 5};
    Func3(arr1, sizeof(arr1)/sizeof(int));
    Func4(arr1, sizeof(arr1)/sizeof(int));

    int (*p1)[5] = arr1;
    int *p2 = arr1;
    
    // int arr2[][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[][3] = {1, 2, 3, 4, 5, 6};
    Func5(arr2, 2, 3);
    Func6(arr2, 2, 3);

    return 0;
}