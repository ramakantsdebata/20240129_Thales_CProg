#include <stdio.h>

int main()
{
	int inp;
	printf("Enter any number between 1 and 9\n");
	scanf("%d", &inp);
	for (int i = 1; i <= inp; i++)
	{
		for (int k = inp - i; k >= 1; k--)
		{
			printf(" ");
		}
		for (int j = i; j >= 1; j--)
		{
			printf("%d", j);
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}