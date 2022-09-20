#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: parameter of the function
 * Return: nothing
 */
void print_diagonal(int n)
{
	int c, r = 0;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == r)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
