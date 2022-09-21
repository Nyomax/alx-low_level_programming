#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: String to print
 * Return: nothing.
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a += 1;
	a -= 1;
	while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}

