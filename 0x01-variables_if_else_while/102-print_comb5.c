#include <stdio.h>
/**
 * main - program that prints all possible combinations of
 * two two-digit
 * Description:The numbers should range from 0 to 99
 * and are separated by ,followed by a space and
 * numbers should be printed with two digits
 * Return:0
 */
int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 != 98 || num2 != 99)
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
