#include <stdio.h>

int main()
{
	int inp;
	printf("Enter any numeber to check it is armstrong or not\n");
	scanf("%d", &inp);
	int length = 1;
	int temp = inp;
	while (temp >= 10)
	{
		temp = temp / 10;
		length++;
	}
	int sum = 0;
	int temp1 = inp;
	while (temp1 >= 1)
	{
		int q = temp1 % 10;
		int mul = 1;
		for (int i = 1; i <= length; i++)
		{
			mul = mul * q;
		}
		sum = sum + mul;
		temp1 = temp1 / 10;
	}

	if (sum == inp)
	{
		printf("%d is armstrong number", inp);
	}
	else
	{
		printf("%d is not an armstrong number", inp);
	}

	return 0;
}
3