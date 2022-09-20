#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: nothing.
 */
void print_square(int size)
{
	int c, r;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
