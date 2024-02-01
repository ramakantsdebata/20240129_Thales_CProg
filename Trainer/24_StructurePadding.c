#include <stdio.h>


typedef int (*AddType)(int, int);
typedef void (*SortType)(int[]);

// struct __attribute__((packed)) Sample
struct Sample
{
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
    double d;   // 8 bytes
    AddType add;
    SortType sort;
};

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    size_t size = sizeof(struct Sample);
    struct Sample smpl;

    printf("Size of struct --> %zu bytes\n", size);
    printf("Addr [a]: %p [%lu]\n", &smpl.a, (((void*)&smpl.b) - ((void*)&smpl.a)));
    printf("Addr [b]: %p [%lu]\n", &smpl.b, (((void*)&smpl.c) - ((void*)&smpl.b)));
    printf("Addr [c]: %p [%lu]\n", &smpl.c, (((void*)&smpl.d) - ((void*)&smpl.c)));
    printf("Addr [d]: %p\n", &smpl.d);


    smpl.a = 'a';
    smpl.b = 10;
    smpl.c = 'c';
    smpl.d = 12.5;
    smpl.add = Sum;

    printf("Sum = %d\n", smpl.add(2, 3));
    // smpl.sort();

    return 0;
}