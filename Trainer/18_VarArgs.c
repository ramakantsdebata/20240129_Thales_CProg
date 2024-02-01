#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{
    va_list args;
    va_start(args, num);

    double sum = 0.0;
    for (int i = 0; i < num; i++)
        sum += va_arg(args, double);

    va_end(args);

    return sum / num;
}

int main()
{
    double result = average(3, 10.5, 20.3, 15.7);

    printf("Average = %.2f\n", result);

    return 0;
}