#include <stdio.h>
/**
 * main - fonction entry point
 * Return: always 0
 */
int main(void)
{
	int  i;
	long int num1 = 0, num11;
	long int a1 = 1, b1 = 2, a11, b11;
	int boul_1 = 1, boul_2 = 1;

	printf("1, 2");
	for (i = 0; i < 96; i++)
	{
		if (boul_1 == 1)		/*we still inside ou variables range*/
		{
		num1 = a1 + b1;
		printf(", %ld", num1);
		a1 = b1;
		b1 = num1;
		}
		else
		{
			if (boul_2 == 1)	/* these bloks will be executed only one time*/
			{
			num11 = num1 % 1000000000;
			num1 = num1 / 1000000000;
			a11 = a1 % 1000000000;
			b11 = b1 % 1000000000;
			a1 = a1 / 1000000000;
			b1 = b1 / 1000000000;
			boul_2 = 0;
			}
		num11 = a11 + b11;
		num1 = a1 + b1 + num11 / 1000000000;
		printf(", %ld%ld", num1, num11 % 1000000000);
		a1 = b1;
		b1 = num1;
		a11 = b11;
		b11 = num11 % 1000000000;
		}				/*test if we went out range for the first time*/
		if (a1 + b1 < 0 && boul_1 == 1)
			boul_1 = 0;
	}
	printf("\n");
	return (0);
}

