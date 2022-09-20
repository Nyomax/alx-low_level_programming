#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: parameter of the function
 * Return: nothing
 */
void print_diagonal(int n)
{
	int num1 = 0;
	int num2;

	while (num1 < n)
	{
		while (num2 <= num1)
		{
			if (num2 == num1)
				{
					_putchar('\\');
				}
				else
					_putchar(' ');
				num2++;
		}
		_putchar('\n');
		num1++;
	}
	if (n <= 0)
		_putchar('\n');
}


			


