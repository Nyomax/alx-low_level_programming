#include "main.h"
/**
 * _puts - function that prints a string
 * @str: pointer to char
 * Return: nothing
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 1;
	}
	_putchar('\n');
}
