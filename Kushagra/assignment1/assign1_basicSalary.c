#include <stdio.h>

int main()
{
    int basicSalary = 0, totalSales = 0;
    float commision = 0, totalCommission = 0;

    printf("Enter basic salary of the employee:");
    scanf("%d", &basicSalary);

    printf("Enter total sales of the employee:");
    scanf("%d", &totalSales);

    if ( totalSales > 5000 && totalSales <= 7500 )
    {
        commision = 3;
    }
    else if ( totalSales > 7500 && totalSales <= 10500 )
    {
        commision = 8;
    }
    else if ( totalSales > 10500 && totalSales <= 15000 )
    {
        commision = 11;
    }
    else if( totalSales > 15000 )
    {
        commision = 15;
    }

    commision = commision * 0.01;
    totalCommission = totalSales * commision;

    printf("Total commission is %.2f\n", totalCommission);
    printf("Total salary is %.2f\n", totalCommission + basicSalary);

    return 0;
}