#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0.
 */
int main(void)
{
	long div = 2;
	long num = 612852475143;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			larg_prim = div;
		}
		div += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
