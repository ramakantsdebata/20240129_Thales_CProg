#include <stdio.h>

int main()
{
    unsigned int a = 0b101010;
    unsigned int b = 0b110110;

    printf("a %u\n", a);
    printf("b %u\n", b);

    unsigned int resultAnd = a & b;
    printf("AND %u\n", resultAnd);

    unsigned int resultOr = a | b;
    printf("OR %u\n", resultOr);

    unsigned int resultXor = a ^ b;
    printf("XOR %u\n", resultXor);

    unsigned int resultNotA = ~a;
    printf("Not A %u\n", resultNotA);

    unsigned int resultLeftShift = a << 2;
    printf("a << 2 %u\n", resultLeftShift);

    unsigned int resultRightShift = a >> 1;
    printf("a >> 1 %u\n", resultRightShift);

    return 0;
}