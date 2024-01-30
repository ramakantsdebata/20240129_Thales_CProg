#include <stdio.h>

int main()
{
    int var1 = 10;
    printf("%p\n", &var1);
    var1 = 20;
    printf("%d\n", var1);

    return 0;
}