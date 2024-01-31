#include <stdio.h>

int main()
{
	for (int i = 2; i <= 8; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("\n%d * %d = %d", i, j, i * j);
		}
		printf("\n\n\n");
	}
	return 0;
}