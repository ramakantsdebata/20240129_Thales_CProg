#include <stdio.h>
#include "16C_Declaration.h"
//extern int data;

int data = 0;

void Test1()
{
    int x = 10;

    {
        int x = 40;
        x++;
        printf("%d\n", x);
    }
    printf("%d\n", x);
}
void Test2()
{
    data = data + 100;
    printf("data: %d\n", data);
    Operate();
    printf("data: %d\n", data);
}

void Test3()
{
    static int x = 10;
    x++;
    printf("x: %d\n", x);
}

int main()
{
    Test3();
    Test3();
    Test3();
    Test3();

    return 0;
}