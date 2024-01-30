void Swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Swap2(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    Swap1(x, y);
    printf("x=%d, y=%d\n", x, y);
    Swap2(&x, &y);
    printf("x=%d, y=%d\n", x, y);

    return 0;
}

// Consideration: 
// 1. Is the effeft of called function on the arg required in the caller?
// 2. How big is the data, and what is the cost of creating a copy?