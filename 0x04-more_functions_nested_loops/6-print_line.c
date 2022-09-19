#include "main.h"
/**
 *print_line - function that draws a straight line in the terminal
 *@n: parameter of the function
 *Return: nothing
 */
void print_line(int n)
{
	int num = 0;

	while (num < n)
	{
		if (n > 0)
		{
			_putchar(95);
			num++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
