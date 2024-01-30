#include <stdio.h>

int main()
{
    int year = 0;
    printf("Enter year to check for leap year:");
    scanf("%d", &year);

    if( (year % 4 == 0 && year != 100) || year % 400 == 0 )
    {
        printf("%d %s", year, " is a leap year\n");
    }
    else
    {
        printf("%d%s", year, " is not a leap year\n");
    }

    return 0;
}