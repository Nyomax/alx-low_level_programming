#include <stdio.h>
/**
 * main - function executed
 * Description:program that prints all possible different combinations
 * of three digits seperated with commas and space with smallest number
 * combination printed.
 * Return:0
 */
int main(void)
{
	int num1 = 0;
	int num2, num3;

	while (num1 <= 9)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num3 += 1;
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}

