#include<stdio.h>
#include <stdlib.h>
#include <stdarg.h>

__attribute__((noreturn))
void myExitFunction()
{
    printf("Performing cleanup and exiting program\n");
    exit(0);
    // return;
}

__attribute__((deprecated("This function is deprecated")))
void oldFunction()
{
    printf("Old Functionality\n");
}

__attribute__((format(printf, 1, 2)))
void printFormattedString(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int main()
{
    // myExitFunction();
    // oldFunction();
    printFormattedString("Formatted Output: %d %s\n", 12.5, "Hello");

    return 0;
}