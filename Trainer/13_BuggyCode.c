#include <stdio.h>

void BugFunction()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, num;

    printf("\nEnter a number to be found in the collection: ");
    scanf("%d", &num);

    for (i = 0; i <= 10; i++)
    {
        if (num == arr[i])
        {
            printf("Found %d at %d index.\n", num, i);
            break;
        }
    }

    if (i >= 10)
        printf("Number not found in the collection.\n");
}

int main()
{
    printf("Before Call to bugs\n");
    BugFunction();
    printf("After Call to bugs\n");
}