#include <stdio.h>

int main()
{
	// Write C code here
	int inp;
	printf("Enter any number between 1 and 40\n");
	scanf("%d", &inp);

	int a = 0, b = 1, total = 0;
	printf("0 1 ");
	for (int i = 1; i <= inp; i++)
	{
		total = a + b;
		printf("%d ", total);
		a = b;
		b = total;
	}

	return 0;
}