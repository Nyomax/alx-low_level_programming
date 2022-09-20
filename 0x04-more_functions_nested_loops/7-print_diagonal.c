#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: parameter of the function
 * Return: nothing
 */
void print_diagonal(int n)
{
	int c, r;

	if (n > 0)
	{
		while (r < n)
		{
			while (c <= r)
			{
				if (c != r)
					_putchar(' ');
				else
					_putchar(92);
				c += 1;
			}
			_putchar('\n');
			r += 1;
			c = 0;
		}
	}
	else
		putchar('\n');
}
