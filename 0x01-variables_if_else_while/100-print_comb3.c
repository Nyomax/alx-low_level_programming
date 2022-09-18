#include <stdio.h>
/**
 * main - main programme executed
 * Description:program that prints all possible different combinations
 * of two digits separated by comma and space
 * Return:0;
 */
int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 9)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}
