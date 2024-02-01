#include <stdio.h>
#include "21B_Header.h"

#define MAX(x, y) ((x) > (y) ? (x) : (y))

#ifdef DEBUG
#define DEBUG_PRINT(x) printf("Debug: %s\n", x)
#else
#define DEBUG_PRINT(x)
#endif

#ifndef ENABLE_FEATURE
#error "Feature is not enabled. Please define ENABLE_FEATURE."
#endif

int main()
{
    int a = 10, b = 20;

    int maxNum = MAX(a, b); //((x) > (y) ? (x) : (y))
    printf("Max: %d\n", maxNum);

    DEBUG_PRINT("This is a debug statement");

    return 0;
}