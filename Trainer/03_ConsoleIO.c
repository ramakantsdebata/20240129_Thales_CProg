
//gcc -g 03_ConsoleIO.c -o 03_ConsoleIO.out     &&      ./03_ConsoleIO.out

#include <stdio.h>

int main()
{
    int num1 = 25, num2, sum = 0;
    char name[10];

    printf("Enter first number: ");
    scanf("%4d", &num1);

    // scanf vs. scanf_s
    // 1. Buffer overflow for longer input to strings
    // 2. Invalid (out of range) data for numerical types
    // scanf DOES provide for buffer width specifier, but it is not mandatory.

    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum  is %d\n", sum);

    printf("\nEnter your name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    
    return 0;    
}
