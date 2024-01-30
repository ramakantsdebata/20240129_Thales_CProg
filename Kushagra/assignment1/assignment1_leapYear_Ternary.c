#include <stdio.h>

int main()
{
    int year = 0;
    printf("Enter year to check for leap year:");
    scanf("%d", &year);

    if ( ( (year % 4 == 0 && year != 100) || year % 400 == 0 ) ? printf("A leap year"): printf("Not a leap year") );

    return 0;
}